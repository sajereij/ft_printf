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

void		type_ouxx(char type, va_list ap, t_ph *p)//maybe add a binary print for bonus
{
	int				i;
	unsigned int	u;

	i = 0;
	u = va_arg(ap, unsigned int); //unsigned long long int ja muutos itoa baseen
	if (type == 'u')
		p->out = ft_itoa_base(u, 10);
	if (type == 'o')
		p->out = ft_itoa_base(u, 8);
	if (type == 'x' || type == 'X')
	{
		p->out = ft_itoa_base(u, 16);
		while (type == 'X' && p->out[i] != '\0')
		{	
			p->out[i] = ft_toupper(p->out[i]);
			++i;
		}
	}
}

void	type_id(va_list ap, t_ph *p)
{
//	int len;
	int i; //int to long long

	i = va_arg(ap, int); //int to long long int
	if (i == 0)
		p->sign = '0';
	if (i < 0)
		p->sign = '-';
//	len = ft_lllen(i);
	p->out = ft_itoa(i);
}

void		type_p(long ad, t_ph *p)
{
	char	*t;

	t = ft_ltoa_base(ad, 16);
	p->out = ft_strjoin("0x", t);
}

void	type_c(int c, t_ph *p)
{
	if (!(p->out = (char *)malloc(2 * sizeof(char))))
		return ;
	p->out[0] = c;
	p->out[1] = '\0';
}

void	type_s(char *s, t_ph *p)
{
	p->out = ft_strdup(s);
}
