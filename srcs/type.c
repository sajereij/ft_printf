/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:46:14 by sreijola          #+#    #+#             */
/*   Updated: 2020/06/22 14:46:14 by sreijola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

void	type_p(long ad, t_ph *p)
{
	if (ad)
		p->out = ft_ulltoa_base(ad, 16);
	else
		p->out = ft_strdup("(nil)");
}

void	type_c(int c, t_ph *p)
{
	if (!(p->out = (char *)malloc(2 * sizeof(char))))
		return ;
	(c == '\0') ? p->null = 1 : 0;
	p->out[0] = c;
	p->out[1] = '\0';
}

void	type_s(char *s, t_ph *p)
{
	if (s)
		p->out = ft_strdup(s);
	else
	{
		p->out = ft_strdup("(null)");
		p->null = 1;
	}
}
