/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 17:12:29 by sreijola          #+#    #+#             */
/*   Updated: 2020/09/17 11:54:46 by sreijola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strndup_free(char *src, int n, int fre)
{
	int		i;
	char	*dest;

	i = -1;
	if (!(dest = ft_memalloc((n + 1) * sizeof(char))))
		return (NULL);
	while (++i < n)
		dest[i] = src[i];
	dest[i] = '\0';
	if (fre == 1)
		free(src);
	return (dest);
}
