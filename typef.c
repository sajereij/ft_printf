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

//The double argument is rounded and converted to decimal notation in the style [-]ddd.ddd, where the number of digits after the decimal-point character is equal to the precision specification. If the precision is missing, it is taken as 6; if the precision is explicitly zero, no decimal-point character appears. If a decimal point appears, at least one digit appears before it.

 //hashtag: f, F, g or G it forces the written output to contain a decimal point even if no more digits follow. By default, if no digits follow, no decimal point is written.

//pres: this is the number of digits to be printed after the decimal point (by default, this is 6).

#include "ft_printf.h"

void		type_f(va_list ap, t_ph *p)
{
	int		aftp;

	aftp = (p->dot == 1) ? p->pres : (p->pres = 6);
	if (p->leng == 'L')
		p->out = ft_ldtoa(va_arg(ap, long double), aftp, p);
	else
		p->out = ft_dtoa(va_arg(ap, double), aftp, p);
}
