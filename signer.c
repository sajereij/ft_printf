/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signer.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 20:39:21 by sreijola          #+#    #+#             */
/*   Updated: 2020/07/01 20:39:21 by sreijola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_sign_pos_fixer(t_ph *p)
{
	int len;

	len = ft_strlen(p->out);
	while (len > 0)
	{
		if ((p->out[len] == '-' && (p->out[len - 1] == '0' || p->out[len - 1] == '-')) || (p->out[len] == '+' && (p->out[len - 1] == '0' || p->out[len - 1] == '+')))
		{
			p->out[len] = '0';
			return;
		}
		else if(p->out[len] == ' ' && (p->out[len - 1] == '0' || p->out[len - 1] == ' ' && p->space == 1 && p->zero == 1) && p->minus == 0)
		{
			p->out[len] = '0';
			return;
		}
		len--;
	}
}
