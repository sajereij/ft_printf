/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 13:21:12 by sreijola          #+#    #+#             */
/*   Updated: 2020/07/23 13:21:12 by sreijola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	print_settings(const char *s, t_index *i)
{
	int ci;
	char **color;
	char **code;

	ci = 0;
	if (s[0] >= '0' && s[0] <= '9')
		i->fd = ft_atoi(s);
	else if (s[0] >= 'A' && s[0] <= 'Y')
	{
		code = ft_strsplit("\x1B[31m \x1B[32m \x1B[33m \x1B[34m \x1B[35m \x1B[36m \x1B[37m \x1B[0m", ' ');
		color = ft_strsplit("RED GRN CYE BLU MAG CYN WHT RES", ' ');
		while (color[ci] != NULL)
		{
			if (ft_strncmp(s, color[ci], 3) == 0)
				ft_putstr_fd(code[ci], i->fd); //i->pri += ft_putstr_ret_fd(code[ci], i->fd) lisäänkö pituutta printediin vai ei
			ci++;
		}
		//free()
	}
	i->len += 5;
}
