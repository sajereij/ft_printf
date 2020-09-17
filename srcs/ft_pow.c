/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 21:24:02 by sreijola          #+#    #+#             */
/*   Updated: 2020/09/16 22:00:45 by sreijola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

__int128_t		ft_pow(__int128 base, long long pow)
{
	if (pow == 0)
		return (1);
	else if (pow % 2 == 0)
		return (ft_pow(base, pow / 2) * ft_pow(base, pow / 2));
	else
		return (base * ft_pow(base, pow / 2) * ft_pow(base, pow / 2));
}
