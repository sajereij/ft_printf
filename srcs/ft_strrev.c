/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 21:21:32 by sreijola          #+#    #+#             */
/*   Updated: 2020/09/16 21:56:27 by sreijola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_strrev(char *str, int len)
{
	int i;
	int	j;
	int	mate;

	i = 0;
	j = len - 1;
	while (i < j)
	{
		mate = str[i];
		str[i++] = str[j];
		str[j--] = mate;
	}
}
