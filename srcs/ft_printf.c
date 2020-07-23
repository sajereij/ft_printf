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

// void	print_struct(t_ph *p)
// {
// 	printf("sign: %c\n", p->sign);
// 	printf("dif: %i\n", p->dif);
// 	printf("zero: %i \n", p->zero);
// 	printf("plus: %i\n", p->plus);
// 	printf("minus: %i\n", p->minus);
// 	printf("space: %i\n", p->space);
// 	printf("htag:%i\n", p->tag);
// 	printf("wid: %i\n", p->wid);
// 	printf("wpdif: %i\n", p->wpdif);
// 	printf("dot: %i\n", p->dot);
// 	printf("pres: %i\n", p->pres);
// 	printf("leng: %i\n", p->leng);
// 	printf("type: %c\n", p->type);
// 	printf("out: %s\n\n", p->out);
// }

int		last_pct(const char *f)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (f[i] != '\0')
	{
		if (f[i] == '%' && f[i + 1] == '%')
			return (1);
		else
		{
			if (f[i] == '%')
				j = i;
		}
		i++;
	}
	return (j);
}

int		null_c(t_ph *p, int fd)
{
	int len;

	len = ft_strlen(p->out);
	if (p->minus == 0)
	{
		p->out[len - 1] = '\0';
		ft_putstr_fd(p->out, fd);
	}
	ft_putchar_fd('\0', fd);
	if (p->minus == 1)
	{
		p->out[len - 1] = '\0';
		ft_putstr_fd(p->out, fd);
	}
	return (len);
}

void	print_placeholder(const char *f, t_ph *p, t_index *i, va_list ap)
{
	i->len++;
	unpack_type(f + i->len, ap, p);
	// print_struct(fact);
	p->per == 0 ? edit_output(p) : 0;
	i->pri += (p->null == 1 && p->type == 'c') ? \
		null_c(p, i->fd) : ft_putstr_ret_fd(p->out, i->fd);
	while (p->per == 0 && f[i->len - 1] != 's' \
		&& f[i->len - 1] != 'c' && f[i->len - 1] != 'p' \
		&& f[i->len - 1] != 'i' && f[i->len - 1] != 'd' \
		&& f[i->len - 1] != 'f' && f[i->len - 1] != 'o' \
		&& f[i->len - 1] != 'u' \
		&& f[i->len - 1] != 'x' && f[i->len - 1] != 'X' \
		&& f[i->len] != '\0')
		++i->len;
	i->len += (p->per == 1) ? last_pct(f) : 0;
}

void	init_structi(t_index *i)
{
	i->len = 0;
	i->pri = 0;
	i->fd = 1;
}

int		ft_printf(const char *f, ...)
{
	t_index		i;
	t_index		*in;
	t_ph		info;
	t_ph		*fact;
	va_list		ap;

	va_start(ap, f);
	in = &i;
	fact = &info;
	init_structi(in);
	while (f[i.len] != '\0')
	{
		while (f[i.len] != '%' && f[i.len] != '\0')
		{
			if (f[i.len] == '{' && f[i.len + 4] == '}')
				print_settings(f + (i.len + 1), in);
			ft_putchar_fd(f[i.len++], i.fd);
			i.pri += 1;
		}
		if (f[i.len] == '%')
			print_placeholder(f, fact, in, ap);
	}
	va_end(ap);
	return (i.pri);
}
