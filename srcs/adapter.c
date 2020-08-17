/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adapter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 21:45:12 by sreijola          #+#    #+#             */
/*   Updated: 2020/06/25 21:45:12 by sreijola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_flagger(t_ph *p)
{
	char	*tmp;

	tmp = NULL;
	if ((p->type == 'd' || p->type == 'i' || p->type == 'f') && p->plus == 1 && p->sign != '-')// pitäiskö olla myös u && p->zero == 0)
		tmp = ft_strjoin("+", p->out);
	if ((p->type == 'd' || p->type == 'i' || p->type == 'f') && p->space == 1 && p->sign != '-' && p->plus == 0) //u? entäs -0
		tmp = ft_strjoin(" ", p->out);
	if (p->type == 'o' && p->tag == 1 && p->sign != '0' && ((p->dot != 1) || (p->dot == 1 && p->wid > p->pres))) // tarvitaan ehdoksi muuten
		tmp = ft_strjoin("0", p->out);
	if ((p->type == 'x' && p->tag == 1 && p->sign != '0') || (p->type == 'p' && p->out[0] != '(')) // && (p->zero == 0 && p->dot == 0 && p->tag == 1))
		tmp = ft_strjoin("0x", p->out);
	if (p->type == 'X' && p->tag == 1 && p->sign != '0')// && p->zero == 0)
		tmp = ft_strjoin("0X", p->out);
	if (tmp != NULL)
	{
		free(p->out);
		p->out = tmp;
	}
	return (ft_strlen(p->out));
}

int		ft_leftie(t_ph *p, int len)
{
	int		i;
	char	*tmp;

	tmp = NULL;
	i = -1;
	while (++i + len < p->wid)
	{
		tmp = ft_strjoin(p->out, " ");
		free(p->out);
		p->out = tmp;
	}
	p->dif = i - 1;
	return (ft_strlen(p->out));
}

int		ft_widener(t_ph *p, int len)
{
	int		i;
	char	*tmp;

	tmp = NULL;
	i = -1;
	while (++i + len < p->wid)
	{
		tmp = ft_strjoin(" ", p->out);
		free(p->out);
		p->out = tmp;
	}
	p->dif = i - 1;
	return (ft_strlen(p->out));
}

int		ft_zeroer(t_ph *p)
{
	int i;

	i = -1;
	while (++i <= p->dif)
		if (p->out[i] == ' ' && p->zos == 0)
			p->out[i] = '0';
	if ((p->type == 'x' && p->tag == 1 && p->sign != '0' && p->out[i + 1] == 'x')\
		|| (p->type == 'X' && p->tag == 1 && p->sign != '0' && p->out[i + 1] == 'X'))
		p->out[i + 1] = '0';
	if ((p->type == 'x' && p->tag == 1 && p->sign != '0' && p->out[i + 1] == 'x'))
		p->out[1] = 'x';
	if ((p->type == 'X' && p->tag == 1 && p->sign != '0' && p->out[i + 1] == 'X'))
		p->out[1] = 'X';
	if ((p->type == 'd' || p->type == 'i' || p->type == 'f') && p->space == 1 && p->sign != '-')
		p->out[0] = ' ';
	if (p->sign == '-' && p->zero == 1 && p->wid > 0 && p->dot == 0)
		p->out[0] = '-';
	if ((p->type == 'i' || p->type == 'd' || p->type == 'f') && p->plus == 1 && p->sign != '-' )
		p->out[0] = '+';
	return (ft_strlen(p->out));
}

void	edit_output(t_ph *p)
{
	int		len;

	len = ft_strlen(p->out);
	if (p->dot)
		len = ft_preciser(p, len);
	if ((p->tag == 1 || p->plus == 1 || p->space == 1) \
		|| (p->type == 'p' && p->out[0] != '('))
		len = ft_flagger(p);
	if (p->minus == 1 && p->wid > len)  //left justified
		len = ft_leftie(p, len);
	if (p->wid > len && p->minus != 1)
		len = ft_widener(p, len);
	if (p->zero == 1 && p->wid >= len && p->minus == 0 \
		&& p->dot == 0 && p->type != 's')
		len = ft_zeroer(p);
	if (p->type == 'i' || p->type == 'd' || p->type == 'f')
		ft_sign_pos_fixer(p, len);
}
