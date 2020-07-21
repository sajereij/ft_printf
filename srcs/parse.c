/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 23:55:03 by sreijola          #+#    #+#             */
/*   Updated: 2020/07/21 23:55:03 by sreijola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_dist(char *p)
{
	int i;

	i = 0;
	while (p[i] != 's' && p[i] != 'c' && p[i] != 'p' && p[i] != 'i' \
		&& p[i] != 'd' && p[i] != 'f' && p[i] != 'o' && p[i] != 'u' \
		&& p[i] != 'x' && p[i] != 'X' && p[i] != '%')
		i++;
	return (i);
}

void	unpack_type(const char *f, va_list ap, t_ph *fact)
{
	int		lf;

	clear_struct(fact);
	fill_struct((char *)f, fact);
	lf = ft_dist((char *)f);
	fact->type = f[lf];
	if (f[lf] == '%')
	{
		fact->out = ft_strdup("%");
		fact->per = 1;
	}
	else if (f[lf] == 'p')
		(type_p(va_arg(ap, long), fact));
	else if (f[lf] == 'c')
		(type_c(va_arg(ap, int), fact));
	else if (f[lf] == 's')
		(type_s(va_arg(ap, char *), fact));
	else if (f[lf] == 'i' || f[lf] == 'd')
		(type_id(ap, fact));
	else if (f[lf] == 'u' || f[lf] == 'o' || f[lf] == 'x' || f[lf] == 'X')
		(type_ouxx(f[lf], ap, fact));
	else if (f[lf] == 'f')
		(type_f(ap, fact));
}
