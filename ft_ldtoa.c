/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ldtoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 03:16:47 by sreijola          #+#    #+#             */
/*   Updated: 2020/07/09 03:16:47 by sreijola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*round_up(char *s, int len, int zero)
{
	int	i;

	i = len;
	if (s[len] >= '5')
	{
		if (s[--len] == '9')
		{
			while (s[len] == '9' || s[len] == '.')
			{
				if ((len == 0 && s[len] == '9') || (zero == 1 && len == 0 && s[len] == '.'))//kaksi eri riippuen onko int isompi ku nolla
				{
					if (len == 0 && s[len] == '9')
						s[len--] = '0';
					s[i] = '\0';
					return(ft_strjoin("1", s));
				}
				else if (s[len] == '.')
					len--;
				else
					s[len--] = '0';
			}
		}
		s[len] = s[len] + 1; //but not if join 1
	}
	s[i] = '\0';
	return (s);
}

static int		str_parts(long nb, char *str, int d) 
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
	while (i < d) //fill extras with zeros 
		str[i++] = '0';
	ft_strrev(str, i);
	str[i] = '\0';
	return (i);
}

char	*ft_ldtoa(long double n, int afterpoint, int tag)//or double n
{
	long		pre;
	long double	post;
	char		*out;
	t_f			f;

	out = ft_memalloc(200);
	f.neg = (n < 0) ? 1 : 0;
	if (n < 0)
		n = -n;
	pre = (long)n;
	f.izero = (pre == 0) ? 1 : 0;
	post = n - (long double)pre; //or double
	f.len = str_parts(pre, out, 0); 
	if (afterpoint != 0)
	{
		out[f.len] = '.';
		post = post * ft_pow(10, afterpoint + 1);
		f.len += str_parts(post, out + f.len + 1, afterpoint);
		out = round_up(out, f.len, f.izero);
		(f.neg == 1) ? out = ft_strjoin("-", out) : 0;
	}
	return(out);
}