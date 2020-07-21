/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 23:21:13 by sreijola          #+#    #+#             */
/*   Updated: 2020/07/06 23:21:13 by sreijola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

char	*ft_ulltoa_base(unsigned long value, int base)
{
	char			*out;
	char			hex_digits[] = "0123456789abcdef";	
	unsigned long	n;
	int				i;

	i = ft_ulllen(value, base);
	out = ft_memalloc(i);
	out[i] = '\0';
	if (value == 0)
		out[0] = '0';
	n = value; // rivin voi poistaa ja muuttaa valueksi?
	while (n != 0)
	{
		--i;
		out[i] = hex_digits[n % base];
		n /= base;
	}
	return (out);
}