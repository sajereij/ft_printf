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
#include "colors.h"

void	print_settings(const char *s, t_index *i)
{
	int ci;

	ci = -1;
	if (s[0] >= '0' && s[0] <= '9')
		i->fd = ft_atoi(s);
	else if (s[0] >= 'A' && s[0] <= 'Y')
	{
		while (g_color[++ci] != NULL)
			if (ft_strnequ(s, g_color[ci], 3) == 0)
				ft_putstr_fd(g_code[ci], i->fd); //i->pri += ft_putstr_ret_fd(code[ci], i->fd) lisäänkö pituutta printediin vai ei
	}
	i->len += 5;
}
