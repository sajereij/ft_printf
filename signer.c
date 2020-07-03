/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signer_tight.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 20:39:21 by sreijola          #+#    #+#             */
/*   Updated: 2020/07/01 20:39:21 by sreijola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"


// void	ft_posizeroer_two(t_ph *p, int len)
// {
// 	int fzc;
// 	int i;

// 	fzc = 0;
// 	i = 0;
// 	while (p->out[i] != '\0' && fzc == 0)
// 	{
// 		if (p->out[i] == '0' && fzc == 0)
// 		{
// 			p->out[i - 1] = '+';
// 			fzc = 1;
// 		}
// 		i++;
// 	}
// }

// void	ft_posizeroer(t_ph *p, int len)
// {
// 	while (len > 0)
// 	{
// 		if (p->out[len] == '+')
// 		{
// 			p->out[len] = '0';
// 			exit;
// 		}
// 		len--;
// 	}
// }

void	ft_spacezeroer(t_ph *p, int len)
{
		while (len > 0)
		{
			if (p->out[len] == ' ' && p->out[len - 1] == '0')
			{
				p->out[len] = '0';
				exit;
			}
			len--;
		}
}


void	ft_posizeroer(t_ph *p, int len)
{
		while (len > 0)
		{
			if (p->out[len] == '+' && p->out[len - 1] == '0')
			{
				p->out[len] = '0';
				exit;
			}
			len--;
		}
}

void	ft_negazeroer(t_ph *p, int len)
{
		while (len > 0)
		{
			if ((p->out[len] == '-' && p->out[len - 1] == '0') || (p->out[len] == '+' && p->out[len - 1] == '0'))
			{
				p->out[len] = '0';
				exit;
			}
			len--;
		}
}

void	ft_sign_pos_fixer(t_ph *p)
{
	int len;

	len = ft_strlen(p->out); // turha myöhemmin
	if (p->sign == '-')
		ft_negazeroer(p, len);
	else if(p->sign != '-' && p->plus == 1) //&& p->wid <= p->pres) // p->sign != '-' turha ehtona? and check that theres a plus for 0 in real
	{	
		ft_negazeroer(p, len);
		// ft_posizeroer(p, len);
	}
	else if(p->sign != '-' && p->space == 1 && p->minus != 1)// && p->zero != 1)//p->wid <= p->pres) // p->sign != '-' turha ehtona? and check that theres a plus for 0 in real
	{	
		ft_spacezeroer(p, len);
	}
}