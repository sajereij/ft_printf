/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 10:32:00 by sreijola          #+#    #+#             */
/*   Updated: 2020/06/26 10:32:00 by sreijola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

char	*ft_strndup(const char *src, int n)
{
	int		i;
	char	*dest;

	i = -1;
	dest = (char *)malloc(n * sizeof(char));
	if (!dest)
		return (0);
	while (++i < n)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
