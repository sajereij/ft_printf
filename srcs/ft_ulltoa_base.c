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
	char	*out;
	char	hex_digits[16];
	int		i;

	ft_strcpy(hex_digits, "0123456789abcdef"); //meneekö max
	i = ft_ulllen(value, base);
	out = ft_memalloc(sizeof(char) * i);
	out[i] = '\0';
	if (value == 0)
		out[0] = '0';
	while (value != 0)
	{
		out[--i] = hex_digits[value % base];
		value /= base;
	}
	return (out);
}
