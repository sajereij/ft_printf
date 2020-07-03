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

	printf("\n¤¤¤ HASHTAG FLAG when WIDTH greater than PRECISION ¤¤¤\n\n");

	ret = ft_printf("%020.15p\n", p); // . not used with pc
	printf("my %d \n", ret);
	ret = printf("%020.15p\n", p);
	printf("or %d \n\n", ret);

	ret = ft_printf("%05.9c\n", 'c');
	printf("my %d\n", ret);
	ret = printf("%05.9c\n", 'c');
	printf("or %d \n\n", ret);

	ret = ft_printf("%010.4s\n", str);
	printf("my %d\n", ret);
	ret = printf("%010.4s\n", str);
	printf("or %d\n\n", ret);

	ret = ft_printf("%010.9i\n", i);
	printf("my %d\n", ret);
	ret = printf("%010.9i\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%015.9d\n", j);
	printf("my %d\n", ret);
	ret = printf("%015.9d\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("%015.9d\n", k);
	printf("my %d\n", ret);
	ret = printf("%015.9d\n", k);
	printf("or %d\n\n", ret);

	ret = ft_printf("%018.9o\n", u);
	printf("my %d\n", ret);
	ret = printf("%018.9o\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%018.9u\n", u);
	printf("my %d\n", ret);
	ret = printf("%018.9u\n", u);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%020.9x\n", u);
	printf("my %d\n", ret);
	ret = printf("%020.9x\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%020.9X\n", u);
	printf("my %d\n", ret);
	ret = printf("%020.9X\n", u);
	printf("or %d\n\n", ret);

		printf("\n¤¤¤ FLAG when WIDTH less than PRECISION ¤¤¤\n\n");

	// // ret = ft_printf("%020.15p\n", p); // . not used with pc
	// // printf("my %d \n", ret);
	// // ret = printf("%020.15p\n", p);
	// // printf("or %d \n\n", ret);

	// // ret = ft_printf("%05.9c\n", 'c');
	// // printf("my %d\n", ret);
	// // ret = printf("%05.9c\n", 'c');
	// // printf("or %d \n\n", ret);

	// // ret = ft_printf("%04.6s\n", str);
	// // printf("my %d\n", ret);
	// // ret = printf("%04.6s\n", str);
	// // printf("or %d\n\n", ret);

	// // // ret = ft_printf("%010.19i\n", i);
	// // // printf("my %d\n", ret);
	// // // ret = printf("%010.19i\n", i);
	// // // printf("or %d\n\n", ret);

	// // // ret = ft_printf("%09.15d\n", j);
	// // // printf("my %d\n", ret);
	// // // ret = printf("%09.15d\n", j);
	// // // printf("or %d\n\n", ret);

	// // // ret = ft_printf("%09.15d\n", k);
	// // // printf("my %d\n", ret);
	// // // ret = printf("%09.15d\n", k);
	// // // printf("or %d\n\n", ret);

	// // // ret = ft_printf("%019.25o\n", u);
	// // // printf("my %d\n", ret);
	// // // ret = printf("%019.25o\n", u);
	// // // printf("or %d\n\n", ret);

	// // // ret = ft_printf("%019.25u\n", u);
	// // // printf("my %d\n", ret);
	// // // ret = printf("%019.25u\n", u);
	// // // printf("or %d\n\n", ret);
	
	// // // ret = ft_printf("%019.25x\n", u);
	// // // printf("my %d\n", ret);
	// // // ret = printf("%019.25x\n", u);
	// // // printf("or %d\n\n", ret);

	// // // ret = ft_printf("%019.25X\n", u);
	// // // printf("my %d\n", ret);
	// // // ret = printf("%019.25X\n", u);
	// // // printf("or %d\n\n", ret);

	printf("\n¤¤¤ WITH FLAGS when WIDTH equal to PRECISION ¤¤¤\n\n");

	// // ret = ft_printf("%010.10s\n", str);
	// // printf("my %d\n", ret);
	// // ret = printf("%010.10s\n", str);
	// // printf("or %d\n\n", ret);

	// // // ret = ft_printf("%010.10i\n", i); // all these ignored with idouxX
	// // // printf("my %d\n", ret);
	// // // ret = printf("%010.10i\n", i);
	// // // printf("or %d\n\n", ret);

	// // // ret = ft_printf("%010.10d\n", j);
	// // // printf("my %d\n", ret);
	// // // ret = printf("%010.10d\n", j);
	// // // printf("or %d\n\n", ret);

	// // // ret = ft_printf("%010.10d\n", k);
	// // // printf("my %d\n", ret);
	// // // ret = printf("%010.10d\n", k);
	// // // printf("or %d\n\n", ret);

	// // // ret = ft_printf("%019.19o\n", u);
	// // // printf("my %d\n", ret);
	// // // ret = printf("%019.19o\n", u);
	// // // printf("or %d\n\n", ret);

	// // // ret = ft_printf("%019.19u\n", u);
	// // // printf("my %d\n", ret);
	// // // ret = printf("%019.19u\n", u);
	// // // printf("or %d\n\n", ret);
	
	// // // ret = ft_printf("%019.19x\n", u);
	// // // printf("my %d\n", ret);
	// // // ret = printf("%019.19x\n", u);
	// // // printf("or %d\n\n", ret);

	return (0);
}
