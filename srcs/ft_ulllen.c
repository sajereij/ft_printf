/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulllen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 19:59:15 by sreijola          #+#    #+#             */
/*   Updated: 2020/09/16 21:56:02 by sreijola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_ulllen(unsigned long long n, int base)
{
	int c;

	c = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= base;
		c++;
	}
	return (c);
}
