/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   preciser.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 15:10:41 by sreijola          #+#    #+#             */
/*   Updated: 2020/08/16 15:10:41 by sreijola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	prec_s(t_ph *p)
{
	char	*tmp;

	tmp = NULL;
	if (p->pres > 0 && p->wpdif > 0)
	{
		tmp = ft_strndup(p->out, p->pres + p->wpdif);
		free(p->out);
		p->out = tmp;
	}
	if (p->pres > 0 && p->wpdif <= 0)
	{
		tmp = ft_strndup(p->out, p->pres);
		free(p->out);
		p->out = tmp;
	}
	if (p->null == 1 && p->pres <= 5)
		ft_strclr(p->out);
	else
		ft_strclr(p->out + p->pres); //toimiiko näin vai pitäiskö olla else
}

void	prec_diouxxp(t_ph *p, int len)
{
	char	*tmp;

	tmp = NULL;
	if (p->pres == 0 && p->sign == '0')
			ft_strclr(p->out);
	if (p->pres > len)
	{
		while (len++ < p->pres)
		{
			tmp = ft_strjoin("0", p->out);
			free(p->out);
			p->out = tmp;
			p->zos = 1;
		}
		if (p->sign == '-')
		{
			tmp = ft_strjoin("-", p->out);
			free(p->out);
			p->out = tmp;
		}
	}
}

int		ft_preciser(t_ph *p, int len)
{
	if (p->type == 'p' || p->type == 'd' || p->type == 'i' \
		|| p->type == 'o' || p->type == 'u' || p->type == 'x' \
		|| p->type == 'X')
		prec_diouxxp(p, len);
	if (p->type == 's')
		prec_s(p);
	return (ft_strlen(p->out));
}
