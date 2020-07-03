/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_tillpercent.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 12:27:32 by sreijola          #+#    #+#             */
/*   Updated: 2020/06/25 12:27:32 by sreijola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putstr_ret_per(char const *str)
{
	int	ret;

	ret = ft_strlen_per(str);
	printf("kukkuu nyt on %d\n", ret);
	if (str)
		write(1, str, ret);
	return (ret);
}
