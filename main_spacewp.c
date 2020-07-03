/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:46:26 by sreijola          #+#    #+#             */
/*   Updated: 2020/06/22 14:46:26 by sreijola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		main()
{
	int ret;
	int i = 123;
	int j = -1;
	int k = 0;
	int l = -6789;
	unsigned int u = 123456789;
	unsigned int o = 9;
	unsigned int x = 456789;
	char p[5];
	char str[6] = "abcdef";

	printf("\x1B[35m\n¤¤¤ SPACE FLAG when WIDTH greater than PRECISION ¤¤¤\n\n");

	ret = ft_printf("% 10.9i\n", i);
	printf("my %d\n", ret);
	ret = printf("% 10.9i\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("% 15.9d\n", j);
	printf("my %d\n", ret);
	ret = printf("% 15.9d\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("% 15.9d\n", k);
	printf("my %d\n", ret);
	ret = printf("% 15.9d\n", k);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ SPACE FLAG when WIDTH less than PRECISION ¤¤¤\n\n");

	ret = ft_printf("% 10.19i\n", i);
	printf("my %d\n", ret);
	ret = printf("% 10.19i\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("% 9.15d\n", j);
	printf("my %d\n", ret);
	ret = printf("% 9.15d\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("% 9.15d\n", k);
	printf("my %d\n", ret);
	ret = printf("% 9.15d\n", k);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ SPACE FLAG when WIDTH equal to PRECISION ¤¤¤\n\n");

	ret = ft_printf("% 10.10i\n", i);
	printf("my %d\n", ret);
	ret = printf("% 10.10i\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("% 10.10d\n", j);
	printf("my %d\n", ret);
	ret = printf("% 10.10d\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("% 10.10d\n", k);
	printf("my %d\n", ret);
	ret = printf("% 10.10d\n", k);
	printf("or %d\n\n\x1B[0m", ret);

	return (0);
}
