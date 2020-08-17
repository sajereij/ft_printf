/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 21:20:29 by sreijola          #+#    #+#             */
/*   Updated: 2020/07/07 21:20:29 by sreijola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*round_up(char *s, int len, int zero)
{
	int	i;

	i = len;
	if (s[len] >= '5')
	{
		if (s[--len] == '9')
		{
			while (s[len] == '9' || s[len] == '.')
			{
				if ((len == 0 && s[len] == '9') \
				|| (zero == '0' && len == 0 && s[len] == '.'))
				{
					if (len == 0 && s[len] == '9')
						s[len--] = '0';
					s[i] = '\0';
					return (ft_strjoin("1", s));
				}
				else if (s[len] == '.')
					len--;
				else
					s[len--] = '0';
			}
		}
		s[len] += 1;
	}
	s[i] = '\0';
	return (s);
}

int		str_parts(long nb, char *str, int d)
{
	int i;
	int j;

	j = d - ft_lllen(nb, 10) + 1;
	i = 0;
	if (nb == 0)
		str[i++] = '0';
	while (nb != 0)
	{
		str[i++] = (nb % 10) + '0';
		nb = nb / 10;
	}
	while (j-- > 0 && d > 0)
		str[i++] = '0';
	while (i < d)
		str[i++] = '0';
	ft_strrev(str, i);
	str[i] = '\0';
	return (i);
}

char	*ft_dtoa(double n, int afterpoint, t_ph *p)
{
	long		pre;
	double		post;
	char		*out;
//	char		*tmp;
	int			len;

//	tmp = NULL;
	out = ft_memalloc(50);
	(n == 0) ? p->sign = '0' : 0;
	(n < 0) ? p->sign = '-' : 0;
	n = (n < 0) ? -n : n;
	pre = (long)n;
	post = n - (double)pre; //or double
	len = str_parts(pre, out, 0);
	if (afterpoint != 0)
	{
		out[len] = '.';
		post = post * ft_pow(10, afterpoint + 1);
		len += str_parts(post, out + len + 1, afterpoint);
		out = round_up(out, len, p->sign);
		(p->sign == '-') ? out = ft_strjoin("-", out) : 0;
	}
	else if (p->tag == 1)
		out = ft_strjoin(out, ".");
	return(out);
}
