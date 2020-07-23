/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 13:11:45 by sreijola          #+#    #+#             */
/*   Updated: 2020/07/06 13:11:45 by sreijola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

char	*ft_lltoa(long long value)
{
	char			*out;
	long long		n;
	int				i;

	if (value == -9223372036854775807 - 1)
		return (ft_strdup("-9223372036854775808"));
	i = ft_lllen(value, 10);
	out = ft_memalloc(i);
	out[i] = '\0';
	if (value <= -1)
		out[0] = '-';
	if (value == 0)
		out[0] = '0';
	n = ( value < 0) ? -value : value;
	while (n != 0)
	{
		--i;
		out[i] = n % 10 + '0';
		n /= 10;
	}
	return (out);
}
