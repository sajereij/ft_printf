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

int		ft_preciser(t_ph *p, int len)
{
	if (p->type == 'p' || p->type == 'd' || p->type == 'i' || p->type == 'o' || p->type == 'u' || p->type == 'x' || p->type == 'X')
	{
		if (p->pres == 0 && p->sign == '0')
			ft_strclr(p->out);
		if (p->pres > len)
		{
			while (len < p->pres)
			{
				p->out = ft_strjoin("0", p->out);
				len++;
				p->zos = 1;
			}
			if (p->sign == '-')
				p->out = ft_strjoin("-", p->out);
		}
	}
	if (p->type == 's')
	{
		if (p->pres > 0 && p->wpdif > 0)
			p->out = ft_strndup(p->out, p->pres + p->wpdif);
		if (p->pres > 0 && p->wpdif <= 0)
			p->out = ft_strndup(p->out, p->pres);
		if (p->null == 1 && p->pres <= 5)
			ft_strclr(p->out);
		ft_strclr(p->out + p->pres);
	}
	return (ft_strlen(p->out));
}

int		ft_flagger(t_ph *p)
{
	if ((p->type == 'd' || p->type == 'i' || p->type == 'f') && p->plus == 1 && p->sign != '-')// && p->zero == 0)
		p->out = ft_strjoin("+", p->out);
	if ((p->type == 'd' || p->type == 'i' || p->type == 'f') && p->space == 1 && p->sign != '-' && p->plus == 0) //entäs -0
		p->out = ft_strjoin(" ", p->out);
	if (p->type == 'o' && p->tag == 1 && p->sign != '0' && ((p->dot != 1) || (p->dot == 1 && p->wid > p->pres))) // tarvitaan ehdoksi muuten
		p->out = ft_strjoin("0", p->out);
	if ((p->type == 'x' && p->tag == 1 && p->sign != '0') || (p->type == 'p' && p->out[0] != '(')) // && (p->zero == 0 && p->dot == 0 && p->tag == 1))
		p->out = ft_strjoin("0x", p->out);
	if (p->type == 'X' && p->tag == 1 && p->sign != '0')// && p->zero == 0)
		p->out = ft_strjoin("0X", p->out);
	return (ft_strlen(p->out));
}

int		ft_leftie(t_ph *p, int len)
{
	int i;

	i = 0;
	while (i + len < p->wid)
	{
		p->out = ft_strjoin(p->out, " ");
		i++;
	}
	p->dif = i - 1;
	return (ft_strlen(p->out));
}

int		ft_widener(t_ph *p, int len)
{
	int i;

	i = 0;
	while (i + len < p->wid)
	{
		p->out = ft_strjoin(" ", p->out);
		i++;
	}
	p->dif = i - 1;
	return (ft_strlen(p->out));
}

int		ft_zeroer(t_ph *p)
{
	int i;

	i = 0;
	while (i <= p->dif)
	{
		if (p->out[i] == ' ' && p->zos == 0)
			p->out[i] = '0';
		i++;
	}
	if ((p->type == 'x' && p->tag == 1 && p->sign != '0' && p->out[i + 1] == 'x'))
	{
		p->out[i + 1] = '0';
		p->out[1] = 'x';
	}
	if ((p->type == 'X' && p->tag == 1 && p->sign != '0' && p->out[i + 1] == 'X'))
	{
		p->out[i + 1] = '0';
		p->out[1] = 'X';
	}
	if ((p->type == 'd' || p->type == 'i' || p->type == 'f') && p->space == 1 && p->sign != '-') //entäs -0
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
	// printf("%s:pre-all\n", p->out);
	if (p->dot)
		len = ft_preciser(p, len);
	// printf("%s:post-precision\n", p->out);
	if ((p->tag == 1 || p->plus == 1 || p->space == 1) || (p->type == 'p' && p->out[0] != '('))
		len = ft_flagger(p);
	// printf("%s:post-flagger\n", p->out);
	if (p->minus == 1 && p->wid > len)  //left justified
		len = ft_leftie(p, len);
	// printf("%s:post-leftie len = %d\n", p->out, len);
	if (p->wid > len && p->minus != 1)
		len = ft_widener(p, len);//, len);
	// printf("%s:post-widener\n", p->out);
	if (p->zero == 1 && p->wid >= len && p->minus == 0 && p->dot == 0 && p->type != 's')
		len = ft_zeroer(p);
	// printf("%s:post-zeroer\n", p->out);
	if (p->type == 'i' || p->type == 'd' || p->type == 'f')
		ft_sign_pos_fixer(p, len);
	// printf("%s:post-fixer\n", p->out);
}
