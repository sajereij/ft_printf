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

	printf("\x1B[33m\n¤¤¤ HASHTAG FLAG when WIDTH greater than PRECISION ¤¤¤\n\n");

	ret = ft_printf("%#18.9o\n", u);
	printf("my %d\n", ret);
	ret = printf("%#18.9o\n", u);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%#20.9x\n", u);
	printf("my %d\n", ret);
	ret = printf("%#20.9x\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%#20.9X\n", u);
	printf("my %d\n", ret);
	ret = printf("%#20.9X\n", u);
	printf("or %d\n\n", ret);

		printf("\n¤¤¤ FLAG when WIDTH less than PRECISION ¤¤¤\n\n");

	ret = ft_printf("%#19.25o\n", u);
	printf("my %d\n", ret);
	ret = printf("%#19.25o\n", u);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%#19.25x\n", u);
	printf("my %d\n", ret);
	ret = printf("%#19.25x\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%#19.25X\n", u);
	printf("my %d\n", ret);
	ret = printf("%#19.25X\n", u);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ WITH FLAGS when WIDTH equal to PRECISION ¤¤¤\n\n");

	ret = ft_printf("%#19.19o\n", u);
	printf("my %d\n", ret);
	ret = printf("%#19.19o\n", u);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%#19.19x\n", u);
	printf("my %d\n", ret);
	ret = printf("%#19.19x\n", u);
	printf("or %d\n\n", ret);

	return (0);
}
