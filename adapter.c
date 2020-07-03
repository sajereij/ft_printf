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

//I divided it into 4 parts: length of object, width, and precision. For example if you wanted to do printf(“%5.3d”, 42). It is asking us to print an int with an width of 5, and precision of 2. We take the pointer s and turn it into a string with itoa_base(s, 10). The length is found using ft_strlen(s) or 2. The precision would be 3–(length)2 = 1, and the width would be 5–(length)2–(precision)1 = 2. According to this I would print 2 blanks, 1 zero, and the characters “4” and “2”.

void	ft_preciser(t_ph *p, int len)
{
	if (p->type == 'd' || p->type == 'i' || p->type == 'o' || p->type == 'u' || p->type == 'x' || p->type == 'X')
	{
		if (p->pres == 0 && p->sign == '0')
			ft_strclr(p->out);
		if (p->pres > len)
		{
			while (len < p->pres)
			{
				p->out = ft_strjoin("0", p->out);
				len++;
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
		ft_strclr(p->out + p->pres);
	}
}

int		ft_flagger(t_ph *p)
{
	if ((p->type == 'd' || p->type == 'f' || p->type == 'i') && p->plus == 1 && p->sign != '-')// && p->zero == 0)
		p->out = ft_strjoin("+", p->out);
	if ((p->type == 'd' || p->type == 'f' || p->type == 'i') && p->space == 1 && p->sign != '-' && p->plus == 0) //entäs -0
		p->out = ft_strjoin(" ", p->out);
	if (p->type == 'o' && p->tag == 1 && p->sign != '0' && ((p->dot != 1) || (p->dot == 1 && p->wid > p->pres))) // tarvitaan ehdoksi muuten
		p->out = ft_strjoin("0", p->out);
	if (p->type == 'x' && p->tag == 1 && p->sign != '0')// && (p->zero == 0 && p->dot == 0 && p->tag == 1))
		p->out = ft_strjoin("0x", p->out);
	if (p->type == 'X' && p->tag == 1 && p->sign != '0')// && p->zero == 0)
		p->out = ft_strjoin("0X", p->out);
	return (ft_strlen(p->out));
}

void	ft_leftie(t_ph *p)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(p->out);
	while (i + len < p->wid)
	{
		p->out = ft_strjoin(p->out, " ");
		i++;
	}
	p->dif = i - 1;
}

void	ft_widener(t_ph *p)
{
	int i;
	int len;

	len = ft_strlen(p->out);
	i = 0;
	if (p->wid > 0 && p->pres > 0 && p->out[0] != '\0' && (p->type != 's' && p->wid <= 0 && p->pres <= 0 && p->wpdif != 0))
	{
		while ((p->wpdif > 0) && (i + len < p->wid) ) // tai vain (p->wpdif > 0)
		{
			p->out = ft_strjoin(" ", p->out);
			i++;
			p->wpdif--;
		}
		p->dif = i - 1;
	}
	else
	{
		while (i + len < p->wid)
		{
			p->out = ft_strjoin(" ", p->out);
			i++;
		}
		p->dif = i - 1;
	}
}

void	ft_zeroer(t_ph *p)
{
	int i;

	i = 0;
	while (i <= p->dif)
	{
		if (p->out[i] == ' ')
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
	if ((p->type == 'd' || p->type == 'f' || p->type == 'i') && p->space == 1 && p->sign != '-') //entäs -0
		p->out[0] = ' ';
	if (p->sign == '-' && p->zero == 1 && p->wid > 0 && p->dot == 0)
			p->out[0] = '-';
	if ((p->type == 'i' || p->type == 'd') && p->plus == 1 && p->sign != '-' )
		p->out[0] = '+';
}

void	edit_output(t_ph *p)
{
	int		len;

	len = ft_strlen(p->out);
	// printf("pre-all: %s\n", p->out);
	if (p->dot)
		ft_preciser(p, len);
	// printf("post-precision: %s\n", p->out);
	if (p->tag == 1 || p->plus == 1 || p->space == 1)
		len = ft_flagger(p);
	// printf("post-flagger: %s\n", p->out);
	if (p->minus == 1 && p->wid > len) //left justified
		ft_leftie(p);
	// printf("post-leftie: %s\n", p->out);
	if (p->wid > len && p->minus != 1) //ilman iffiäkin kaikki vaikuttaa toimivan
		ft_widener(p);//, len);
	// printf("post-widener: %s\n", p->out);
	if (p->zero == 1 && p->wid > len && p->minus == 0) //&& p->type != 'x' && p->type != 'X') // tarviiko pois sulkea x ja X
		ft_zeroer(p);
	// printf("post-zeroer: %s\n", p->out);
	if (p->type == 'i' || p->type == 'd') // && ((p->pres > 0) || ((p->wid > 0) && p->pres == 0 && p->zero == 1)))
		ft_sign_pos_fixer(p);
	//printf("post-fixer: %s\n", p->out);
}
