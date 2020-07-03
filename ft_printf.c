/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:48:44 by sreijola          #+#    #+#             */
/*   Updated: 2020/06/22 14:48:44 by sreijola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_struct(t_ph *p)
{
	printf("sign: %c\n", p->sign);
	printf("dif: %i\n", p->dif);
	printf("zero: %i \n", p->zero);
	printf("plus: %i\n", p->plus);
	printf("minus: %i\n", p->minus);
	printf("space: %i\n", p->space);
	printf("htag:%i\n", p->tag);
	printf("wid: %i\n", p->wid);
	printf("wpdif: %i\n", p->wpdif);	
	printf("dot: %i\n", p->dot);
	printf("pres: %i\n", p->pres);
	printf("leng: %i\n", p->leng);
	printf("type: %c\n", p->type);			
//	printf("out: %s\n\n", p->out);
}

void	clear_struct(t_ph *p)
{
	p->sign = '+';
	p->dif = 0;
	p->zero = 0;
	p->plus = 0;
	p->minus = 0;
	p->space = 0;
	p->tag = 0;
	p->wid = 0;
	p->dot = 0;
	p->pres = 0; // f oletus 6
	p->leng = 0;
	p->type = 0;
//	ft_strclr(p->out);
}

void	fill_flag(char c, t_ph *p)
{
		if (c == '-')
			p->minus = 1;
		if (c == '+')
			p->plus = 1;
		if (c == ' ')
			p->space = 1;
		if (c == '0')
			p->zero = 1;
		if (c == '#')
			p->tag = 1;
}

void	fill_struct(char *f, t_ph *p)
{
	while (*f)
	{
		while (*f == '-' || *f == '+' || *f == ' ' || *f == '0' || *f == '#')
		{
			fill_flag(*f, p);
			f++;
		}
		if (ft_isdigit(*f))
		{
			p->wid = ft_atoi(f);
			while (ft_isdigit(*f))
				f++;
		}
		if (*f == '.')
		{
			p->dot = 1;
			f++;
			if (ft_isdigit(*f))
				p->pres = ft_atoi(f);
			else
				p->pres = 0;
			while (ft_isdigit(*f))
				f++;
		}
		if (*f == 'l' || *f == 'h'|| *f == 'L')
		{
			p->leng = *f;
			if ((*f == 'l' && *(f++) == 'l') || (*f == 'h' && *(f++) == 'h'))
				p->leng = (*f) * 2;
		}
		f++;
	}
	p->wpdif = p->wid - p->pres;
}

int		ft_dist(char *p)
{
	int i = 0;
	while (p[i] != 's' && p[i] != 'c' && p[i] != 'p' && p[i] != 'i' && p[i] != 'd' && \
			p[i] != 'f' && p[i] != 'o' && p[i] != 'u' && p[i] != 'x' && p[i] != 'X' && p[i] != '%')
		i++;
	return (i);
}

void	unpack_type(const char *f, va_list ap, t_ph *fact)
{
	int		lf;

	clear_struct(fact);
	fill_struct((char *)f, fact);
	fact->type = f[lf = ft_dist((char *)f)];
	if (f[lf] == '%')
		fact->out = ft_strdup("%");
	else if (f[lf] == 'p')
		(type_p(va_arg(ap, long), fact));
	else if (f[lf] == 'c')
		(type_c(va_arg(ap, int), fact));
	else if (f[lf] == 's')
		(type_s(va_arg(ap, char *), fact));
	else if (f[lf] == 'i' || f[lf] == 'd')
		(type_id(ap, fact));
	else if (f[lf] == 'u' || f[lf] == 'o' || f[lf] == 'x' || f[lf] == 'X' )
		(type_ouxx(f[lf], ap, fact));
	// else if (f[lf] == 'f')
	// 	(type_f(f[lf], ap, fact));
}

int		ft_printf(const char *f, ...)
{
	t_index		i;
	t_ph		info;
	t_ph		*fact;
	va_list		ap;

	i.len = 0;
	i.pri = 0;
	va_start(ap, f);
	fact = &info;
	while (f[i.len])
	{
		while (f[i.len] != '%' && f[i.len] != '\0')
		{
			ft_putchar(f[i.len++]);
			i.pri += 1;
		}
		if (f[i.len] == '%')
		{
			unpack_type(f + i.len + 1, ap, fact);
			// print_struct(fact);
			edit_output(fact);
			// print_struct(fact);
			i.pri += ft_putstr_ret(info.out);
			while (f[i.len - 1] != 's' && f[i.len - 1] != 'c' && f[i.len - 1] != 'p' && f[i.len - 1] != 'i' && f[i.len - 1] != 'd' && f[i.len - 1] != 'f'  && f[i.len - 1] != 'o'  && f[i.len - 1] != 'u'  && f[i.len - 1] != 'x'  && f[i.len - 1] != 'X' && f[i.len] != '\0') //change to not type specifier
				++i.len;
		}
	}
	va_end(ap);
	return (i.pri);
}

