/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:46:14 by sreijola          #+#    #+#             */
/*   Updated: 2020/06/22 14:46:14 by sreijola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		type_ouxx(char type, va_list ap, t_ph *p)//maybe add a binary print for bonus
{
	int					i;
	unsigned long long	u;

	i = 0;
	if (p->leng == 'l' || p->leng == 'l' * 2)
		u = va_arg(ap, unsigned long long);
	else
		u = (va_arg(ap, unsigned int)); //vai ilman elseä?
	if (type == 'u')
		p->out = ft_ulltoa_base(u, 10);
	if (type == 'o')
		p->out = ft_ulltoa_base(u, 8);
	if (type == 'x' || type == 'X')
	{
		p->out = ft_ulltoa_base(u, 16);
		while (type == 'X' && p->out[i] != '\0')
		{	
			p->out[i] = ft_toupper(p->out[i]);
			++i;
		}
	}
}

void	type_id(va_list ap, t_ph *p)
{
	long long i;

	if (p->leng == 'l' || p->leng == 'l' * 2)
		i = (va_arg(ap, long long));
	else
		i = (va_arg(ap, int));
	if (i == 0)
		p->sign = '0';
	if (i < 0)
		p->sign = '-';
	p->out = ft_lltoa_base(i, 10);
}

void		type_p(long ad, t_ph *p)
{
	p->out = ft_ltoa_base(ad, 16);
	p->out = ft_strjoin("0x", p->out);
}

void	type_c(int c, t_ph *p)
{
	if (!(p->out = (char *)malloc(2 * sizeof(char))))
		return ;
	p->out[0] = c;
	p->out[1] = '\0';
}

void	type_s(char *s, t_ph *p)
{
	p->out = ft_strdup(s);
}
