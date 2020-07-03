/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_ret.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 12:03:44 by sreijola          #+#    #+#             */
/*   Updated: 2020/06/25 12:03:44 by sreijola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putstr_ret(char const *str)
{
	int ret;

	ret = ft_strlen(str);
	if (str)
		write(1, str, ret);
	return (ret);
}