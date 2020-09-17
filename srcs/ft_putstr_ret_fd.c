/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_ret_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 12:03:44 by sreijola          #+#    #+#             */
/*   Updated: 2020/09/16 21:57:25 by sreijola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putstr_ret_fd(char const *str, int fd)
{
	int ret;

	ret = ft_strlen(str);
	if (str)
		write(fd, str, ret);
	return (ret);
}
