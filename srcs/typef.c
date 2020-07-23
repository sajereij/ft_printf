/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typef.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 21:16:21 by sreijola          #+#    #+#             */
/*   Updated: 2020/06/25 21:16:21 by sreijola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	type_f(va_list ap, t_ph *p)
{
	p->pres = (p->dot == 1) ? p->pres : 6;
	if (p->leng == 'L')
		p->out = ft_ldtoa(va_arg(ap, long double), p->pres, p);
	else
		p->out = ft_dtoa(va_arg(ap, double), p->pres, p);
}

void	type_ouxx(char type, va_list ap, t_ph *p)
{
	int					i;
	unsigned long long	u;

	i = 0;
	if (p->leng == 'l' || p->leng == 'l' * 2)
		u = va_arg(ap, unsigned long long);
	else
		u = (va_arg(ap, unsigned int));
	(u == 0) ? p->sign = '0' : 0;
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
	p->out = ft_lltoa(i);
}
