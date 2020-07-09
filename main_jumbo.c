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
	// char str[6] = "\0";
	char str[6] = "abcdef";


	// ret = ft_printf("%f, ");
	// printf("my %d\n", ret);
	// ret = printf("%f", 5.123456789);
	// printf("or %d\n", ret);

	// printf("%ld\n%ld)", sizeof(long), sizeof(long long));

	printf("\n¤¤¤ NUMERICAL WITH WPFL ¤¤¤\n");

	ret = ft_printf("%+010i\n", i);
	printf("my %d\n", ret);
	ret = printf("%+010i\n", i);
	printf("my %d\n\n", ret);
	
	ret = ft_printf("%+015d\n", i);
	printf("my %d\n", ret);
	ret = printf("%+015d\n", i);
	printf("my %d\n\n", ret);

	// // ret = ft_printf("%+020o\n", i); // + with o
	// // printf("my %d\n", ret);
	// // ret = printf("%+020o\n", i);
	// // printf("my %d\n\n", ret);

	// // ret = ft_printf("%+ 10i\n", i); // + ignores with ' '
	// // printf("my %d\n", ret);
	// // ret = printf("%+ 10i\n", i);
	// // printf("my %d\n\n", ret);
	
	// // ret = ft_printf("%+ 15d\n", i); // + ignores with ' '
	// // printf("my %d\n", ret);
	// // ret = printf("%+ 15d\n", i);
	// // printf("my %d\n\n", ret);

	// // ret = ft_printf("%+ 20o\n", i); // + ignored with o
	// // printf("my %d\n", ret);
	// // ret = printf("%+ 20o\n", i);
	// // printf("my %d\n\n", ret);

printf("\x1B[34m\n¤¤¤ MINUS FLAG when WIDTH greater than PRECISION ¤¤¤\n");

	ret = ft_printf("%-10.4s\n", str);
	printf("my %d\n", ret);
	ret = printf("%-10.4s\n", str);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-10.9i\n", i);
	printf("my %d\n", ret);
	ret = printf("%-10.9i\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-15.9d\n", j);
	printf("my %d\n", ret);
	ret = printf("%-15.9d\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-15.9d\n", k);
	printf("my %d\n", ret);
	ret = printf("%-15.9d\n", k);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-18.9o\n", u);
	printf("my %d\n", ret);
	ret = printf("%-18.9o\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-18.9u\n", u);
	printf("my %d\n", ret);
	ret = printf("%-18.9u\n", u);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%-20.9x\n", u);
	printf("my %d\n", ret);
	ret = printf("%-20.9x\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-20.9X\n", u);
	printf("my %d\n", ret);
	ret = printf("%-20.9X\n", u);
	printf("or %d\n\n", ret);

		printf("\n¤¤¤ FLAG when WIDTH less than PRECISION ¤¤¤\n");

	ret = ft_printf("%-4.6s\n", str);
	printf("my %d\n", ret);
	ret = printf("%-4.6s\n", str);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-10.19i\n", i);
	printf("my %d\n", ret);
	ret = printf("%-10.19i\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-9.15d\n", j);
	printf("my %d\n", ret);
	ret = printf("%-9.15d\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-9.15d\n", k);
	printf("my %d\n", ret);
	ret = printf("%-9.15d\n", k);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-19.25o\n", u);
	printf("my %d\n", ret);
	ret = printf("%-19.25o\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-19.25u\n", u);
	printf("my %d\n", ret);
	ret = printf("%-19.25u\n", u);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%-19.25x\n", u);
	printf("my %d\n", ret);
	ret = printf("%-19.25x\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-19.25X\n", u);
	printf("my %d\n", ret);
	ret = printf("%-19.25X\n", u);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ WITH FLAGS when WIDTH equal to PRECISION ¤¤¤\n");

	ret = ft_printf("%-10.10s\n", str);
	printf("my %d\n", ret);
	ret = printf("%-10.10s\n", str);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-10.10i\n", i);
	printf("my %d\n", ret);
	ret = printf("%-10.10i\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-10.10d\n", j);
	printf("my %d\n", ret);
	ret = printf("%-10.10d\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-10.10d\n", k);
	printf("my %d\n", ret);
	ret = printf("%-10.10d\n", k);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-19.19o\n", u);
	printf("my %d\n", ret);
	ret = printf("%-19.19o\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-19.19u\n", u);
	printf("my %d\n", ret);
	ret = printf("%-19.19u\n", u);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%-19.19x\n", u);
	printf("my %d\n", ret);
	ret = printf("%-19.19x\n", u);
	printf("or %d\n\n", ret);

printf("\x1B[31m\n¤¤¤ PLUS FLAG when WIDTH greater than PRECISION ¤¤¤\n");

	ret = ft_printf("%+10.9i\n", i);
	printf("my %d\n", ret);
	ret = printf("%+10.9i\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%+15.9d\n", j);
	printf("my %d\n", ret);
	ret = printf("%+15.9d\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("%+15.9d\n", k);
	printf("my %d\n", ret);
	ret = printf("%+15.9d\n", k);
	printf("or %d\n\n", ret);

		printf("\n¤¤¤ FLAG when WIDTH less than PRECISION ¤¤¤\n");

	ret = ft_printf("%+10.19i\n", i);
	printf("my %d\n", ret);
	ret = printf("%+10.19i\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%+9.15d\n", j);
	printf("my %d\n", ret);
	ret = printf("%+9.15d\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("%+9.15d\n", k);
	printf("my %d\n", ret);
	ret = printf("%+9.15d\n", k);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ WITH FLAGS when WIDTH equal to PRECISION ¤¤¤\n");

	ret = ft_printf("%+10.10i\n", i);
	printf("my %d\n", ret);
	ret = printf("%+10.10i\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%+10.10d\n", j);
	printf("my %d\n", ret);
	ret = printf("%+10.10d\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("%+10.10d\n", k);
	printf("my %d\n", ret);
	ret = printf("%+10.10d\n", k);
	printf("or %d\n\n", ret);

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

		printf("\n¤¤¤ FLAG when WIDTH less than PRECISION ¤¤¤\n");

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

	printf("\n¤¤¤ hashtag FLAGS when WIDTH equal to PRECISION ¤¤¤\n\n");

	ret = ft_printf("%#19.19o\n", u);
	printf("my %d\n", ret);
	ret = printf("%#19.19o\n", u);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%#19.19x\n", u);
	printf("my %d\n", ret);
	ret = printf("%#19.19x\n", u);
	printf("or %d\n\n", ret);


	printf("\x1B[35m\n¤¤¤ SPACE FLAG when WIDTH greater than PRECISION ¤¤¤\n");

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

	printf("\n¤¤¤ SPACE FLAG when WIDTH less than PRECISION ¤¤¤\n");

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

	printf("\n¤¤¤ SPACE FLAG when WIDTH equal to PRECISION ¤¤¤\n");

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


	printf("\n¤¤¤ ALL WITH WIDTH greater than PRECISION ¤¤¤\n");

	// // ret = ft_printf("%20.15p\n", p); // . not used with pc
	// // printf("my %d \n", ret);
	// // ret = printf("%20.15p\n", p);
	// // printf("or %d \n\n", ret);

	// // ret = ft_printf("%5.9c\n", 'c');
	// // printf("my %d\n", ret);
	// // ret = printf("%5.9c\n", 'c');
	// // printf("or %d \n\n", ret);

	ret = ft_printf("%10.4s\n", str);
	printf("my %d\n", ret);
	ret = printf("%10.4s\n", str);
	printf("or %d\n\n", ret);

	ret = ft_printf("%10.9i\n", i);
	printf("my %d\n", ret);
	ret = printf("%10.9i\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%15.9d\n", j);
	printf("my %d\n", ret);
	ret = printf("%15.9d\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("%15.9d\n", k);
	printf("my %d\n", ret);
	ret = printf("%15.9d\n", k);
	printf("or %d\n\n", ret);

	ret = ft_printf("%18.9o\n", u);
	printf("my %d\n", ret);
	ret = printf("%18.9o\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%18.9u\n", u);
	printf("my %d\n", ret);
	ret = printf("%18.9u\n", u);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%20.9x\n", u);
	printf("my %d\n", ret);
	ret = printf("%20.9x\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%20.9X\n", u);
	printf("my %d\n", ret);
	ret = printf("%20.9X\n", u);
	printf("or %d\n\n", ret);

		printf("\n¤¤¤ WITH WIDTH less than PRECISION ¤¤¤\n\n");

	// // ret = ft_printf("%20.15p\n", p); // . not used with pc
	// // printf("my %d \n", ret);
	// // ret = printf("%20.15p\n", p);
	// // printf("or %d \n\n", ret);

	// // ret = ft_printf("%5.9c\n", 'c');
	// // printf("my %d\n", ret);
	// // ret = printf("%5.9c\n", 'c');
	// // printf("or %d \n\n", ret);

	ret = ft_printf("%4.6s\n", str);
	printf("my %d\n", ret);
	ret = printf("%4.6s\n", str);
	printf("or %d\n\n", ret);

	ret = ft_printf("%10.19i\n", i);
	printf("my %d\n", ret);
	ret = printf("%10.19i\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%9.15d\n", j);
	printf("my %d\n", ret);
	ret = printf("%9.15d\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("%9.15d\n", k);
	printf("my %d\n", ret);
	ret = printf("%9.15d\n", k);
	printf("or %d\n\n", ret);

	ret = ft_printf("%19.25o\n", u);
	printf("my %d\n", ret);
	ret = printf("%19.25o\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%19.25u\n", u);
	printf("my %d\n", ret);
	ret = printf("%19.25u\n", u);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%19.25x\n", u);
	printf("my %d\n", ret);
	ret = printf("%19.25x\n", u);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ WITH WIDTH equal to PRECISION ¤¤¤\n");
	ret = ft_printf("%10.10s\n", str);
	printf("my %d\n", ret);
	ret = printf("%10.10s\n", str);
	printf("or %d\n\n", ret);

	ret = ft_printf("%10.10i\n", i);
	printf("my %d\n", ret);
	ret = printf("%10.10i\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%10.10d\n", j);
	printf("my %d\n", ret);
	ret = printf("%10.10d\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("%10.10d\n", k);
	printf("my %d\n", ret);
	ret = printf("%10.10d\n", k);
	printf("or %d\n\n", ret);

	ret = ft_printf("%19.19o\n", u);
	printf("my %d\n", ret);
	ret = printf("%19.19o\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%19.19u\n", u);
	printf("my %d\n", ret);
	ret = printf("%19.19u\n", u);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%19.19x\n", u);
	printf("my %d\n", ret);
	ret = printf("%19.19x\n", u);
	printf("or %d\n\n", ret);

	// ret = ft_printf("%20p\n", p); // not changed yet yet
	// 	printf("my %d \n", ret);
	// 	ret = printf("%20p\n", p);
	// 	printf("or %d \n\n", ret);

	// 	ret = ft_printf("%5c\n", 'c');
	// 	printf("my %d\n", ret);
	// 	ret = printf("%5c\n", 'c');
	// 	printf("or %d \n\n", ret);

	// 	ret = ft_printf("%10s\n", str);
	// 	printf("my %d\n", ret);
	// 	ret = printf("%10s\n", str);
	// 	printf("or %d\n\n", ret);

	// 	ret = ft_printf("%10i\n", i);
	// 	printf("my %d\n", ret);
	// 	ret = printf("%10i\n", i);
	// 	printf("or %d\n\n", ret);

	// 	ret = ft_printf("%15d\n", j);
	// 	printf("my %d\n", ret);
	// 	ret = printf("%15d\n", j);
	// 	printf("or %d\n\n", ret);

	// 	ret = ft_printf("%18o\n", u);
	// 	printf("my %d\n", ret);
	// 	ret = printf("%18o\n", u);
	// 	printf("or %d\n\n", ret);

	// 	ret = ft_printf("%18u\n", u);
	// 	printf("my %d\n", ret);
	// 	ret = printf("%18u\n", u);
	// 	printf("or %d\n\n", ret);
		
	// 	ret = ft_printf("%20x\n", u);
	// 	printf("my %d\n", ret);
	// 	ret = printf("%20x\n", u);
	// 	printf("or %d\n\n", ret);

	// 	ret = ft_printf("%20X\n", u);
	// 	printf("my %d\n", ret);
	// 	ret = printf("%20X\n", u);
	// 	printf("or %d\n\n", ret);

	printf("\n¤¤¤ PRECISION WITH FLAGS ¤¤¤\n");

	printf("\n¤¤¤ ZERO ¤¤¤\n");

	// // ret = ft_printf("%0.20p\n", p); // 0 not used with scp
	// // printf("my %d \n", ret);
	// // ret = printf("%0.20p\n", p);
	// // printf("or %d \n\n", ret);

	// // ret = ft_printf("%0.5c\n", 'c'); 
	// // printf("my %d\n", ret);
	// // ret = printf("%0.5c\n", 'c');
	// // printf("or %d \n\n", ret);

	// // ret = ft_printf("%0.10s\n", str);
	// // printf("my %d\n", ret);
	// // ret = printf("%0.10s\n", str);
	// // printf("or %d\n\n", ret);

	// // ret = ft_printf("%0.10i\n", i);
	// // printf("my %d\n", ret);
	// // ret = printf("%0.10i\n", i);
	// // printf("my %d\n\n", ret);
	
	// // ret = ft_printf("%0.15d\n", i);
	// // printf("my %d\n", ret);
	// // ret = printf("%0.15d\n", i);
	// // printf("my %d\n\n", ret);

	// // ret = ft_printf("%0.10i\n", j);
	// // printf("my %d\n", ret);
	// // ret = printf("%0.10i\n", j);
	// // printf("my %d\n\n", ret);
	
	// // ret = ft_printf("%0.15d\n", j);
	// // printf("my %d\n", ret);
	// // ret = printf("%0.15d\n", j);
	// // printf("my %d\n\n", ret);

	// // ret = ft_printf("%0.10i\n", k);
	// // printf("my %d\n", ret);
	// // ret = printf("%0.10i\n", k);
	// // printf("my %d\n\n", ret);
	
	// // ret = ft_printf("%0.15d\n", k);
	// // printf("my %d\n", ret);
	// // ret = printf("%0.15d\n", k);
	// // printf("my %d\n\n", ret);

	// // ret = ft_printf("%0.20o\n", u);
	// // printf("my %d\n", ret);
	// // ret = printf("%0.20o\n", u);
	// // printf("my %d\n\n", ret);

	// // ret = ft_printf("%0.20u\n", u);
	// // printf("my %d\n", ret);
	// // ret = printf("%0.20u\n", u);
	// // printf("my %d\n\n", ret);
	
	ret = ft_printf("%0.20x\n", u);
	printf("my %d\n", ret);
	ret = printf("%0.20x\n", u);
	printf("my %d\n\n", ret);

	ret = ft_printf("%0.20X\n", u);
	printf("my %d\n", ret);
	ret = printf("%0.20X\n", u);
	printf("my %d\n\n", ret);

	printf("\n¤¤¤ PLUS ¤¤¤\n");

	// // ret = ft_printf("%+20p\n", p); // + not used with scp
	// // printf("my %d \n", ret);
	// // ret = printf("%+20p\n", p);
	// // printf("or %d \n\n", ret);

	// // ret = ft_printf("%+5s\n", str); 
	// // printf("my %d\n", ret);
	// // ret = printf("%+5s\n", str);
	// // printf("or %d\n\n", ret);

	// // ret = ft_printf("%+5c\n", 'c'); 
	// // printf("my %d\n", ret);
	// // ret = printf("%+5c\n", 'c');
	// // printf("or %d \n\n", ret);

	ret = ft_printf("%+.6i\n", i);
	printf("my %d\n", ret);
	ret = printf("%+.6i\n", i);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%+.6d\n", i);
	printf("my %d\n", ret);
	ret = printf("%+.6d\n", i);
	printf("or %d\n\n", ret);

		ret = ft_printf("%+.9i\n", j);
	printf("my %d\n", ret);
	ret = printf("%+.9i\n", j);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%+.9d\n", j);
	printf("my %d\n", ret);
	ret = printf("%+.9d\n", j);
	printf("or %d\n\n", ret);

		ret = ft_printf("%+.5i\n", k);
	printf("my %d\n", ret);
	ret = printf("%+.5i\n", k);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%+.5d\n", k);
	printf("my %d\n", ret);
	ret = printf("%+.5d\n", k);
	printf("or %d\n\n", ret);

	// // ret = ft_printf("%+o\n", u);//+ not used with unsigned ints
	// // printf("my %d\n", ret);
	// // ret = printf("%+o\n", u);
	// // printf("my %d\n\n", ret);

	// // ret = ft_printf("%+u\n", u);
	// // printf("my %d\n", ret);
	// // ret = printf("%+u\n", u);
	// // printf("my %d\n\n", ret);
	
	// // ret = ft_printf("%+x\n", u);
	// // printf("my %d\n", ret);
	// // ret = printf("%+x\n", u);
	// // printf("my %d\n\n", ret);

	// // ret = ft_printf("%+X\n", u);
	// // printf("my %d\n", ret);
	// // ret = printf("%+X\n", u);
	// // printf("my %d\n\n", ret);

	printf("\n¤¤¤ MINUS ¤¤¤\n");
	
	// // ret = ft_printf("%-.15p\n", p);
	// // printf("my %d \n", ret);
	// // ret = printf("%-.15p\n", p);
	// // printf("or %d \n\n", ret);

	// // ret = ft_printf("%-.5c\n", 'c'); 
	// // printf("my %d\n", ret);
	// // ret = printf("%-.5c\n", 'c');
	// // printf("or %d \n\n", ret);

	ret = ft_printf("%-.11s\n", str);
	printf("my %d\n", ret);
	ret = printf("%-.11s\n", str);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-.21i\n", i);
	printf("my %d\n", ret);
	ret = printf("%-.21i\n", i);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%-.21d\n", i);
	printf("my %d\n", ret);
	ret = printf("%-.21d\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-.21d\n", j);
	printf("my %d\n", ret);
	ret = printf("%-.21d\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-.21d\n", k);
	printf("my %d\n", ret);
	ret = printf("%-.21d\n", k);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-.21o\n", i);
	printf("my %d\n", ret);
	ret = printf("%-.21o\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-.21u\n", u);
	printf("my %d\n", ret);
	ret = printf("%-.21u\n", u);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%-.21x\n", u);
	printf("my %d\n", ret);
	ret = printf("%-.21x\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-.21X\n", u);
	printf("my %d\n", ret);
	ret = printf("%-.21X\n", u);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ SPACE ¤¤¤\n");
	
	// // ret = ft_printf("% 20p\n", p); // ' ' not used with scp
	// // printf("my %d \n", ret);
	// // ret = printf("% 20p\n", p);
	// // printf("or %d \n\n", ret);

	// // ret = ft_printf("% 10c\n", 'c'); 
	// // printf("my %d\n", ret);
	// // ret = printf("% 10c\n", 'c');
	// // printf("or %d \n\n", ret);

	// // ret = ft_printf("% 10s\n", str);
	// // printf("my %d\n", ret);
	// // ret = printf("% 10s\n", str);
	// // printf("or %d\n\n", ret);

	ret = ft_printf("% .11i\n", i);
	printf("my %d\n", ret);
	ret = printf("% .11i\n", i);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("% .11d\n", i);
	printf("my %d\n", ret);
	ret = printf("% .11d\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("% .11d\n", j);
	printf("my %d\n", ret);
	ret = printf("% .11d\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("% .11d\n", k);
	printf("my %d\n", ret);
	ret = printf("% .11d\n", k);
	printf("or %d\n\n", ret);

	// // ret = ft_printf("% o\n", i); // ' ' not used with ouxX
	// // printf("my %d\n", ret);
	// // ret = printf("% o\n", i);
	// // printf("my %d\n\n", ret);

	// // ret = ft_printf("% u\n", u);
	// // printf("my %d\n", ret);
	// // ret = printf("% u\n", u);
	// // printf("my %d\n\n", ret);
	
	// // ret = ft_printf("% x\n", u);
	// // printf("my %d\n", ret);
	// // ret = printf("% x\n", u);
	// // printf("my %d\n\n", ret);

	// // ret = ft_printf("% X\n", u);
	// // printf("my %d\n", ret);
	// // ret = printf("% X\n", u);
	// // printf("my %d\n\n", ret);

	printf("\n¤¤¤ HASHTAG ¤¤¤\n");
	
	// // ret = ft_printf("%#i\n", i); // not used with diu
	// // printf("my %d\n", ret);
	// // ret = printf("%#i\n", i);
	// // printf("my %d\n\n", ret);
	
	// // ret = ft_printf("%#d\n", i);
	// // printf("my %d\n", ret);
	// // ret = printf("%#d\n", i);
	// // printf("my %d\n\n", ret);

	// // ret = ft_printf("%#u\n", u);
	// // printf("my %d\n", ret);
	// // ret = printf("%#u\n", u);
	// // printf("or %d\n\n", ret);

	ret = ft_printf("%#.19o\n", i);
	printf("my %d\n", ret);
	ret = printf("%#.19o\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%#.19x\n", u);
	printf("my %d\n", ret);
	ret = printf("%#.19x\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%#.19X\n", u);
	printf("my %d\n", ret);
	ret = printf("%#.19X\n", u);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ ALL WITH WIDTH ¤¤¤\n");

	ret = ft_printf("%20p\n", p);
	printf("my %d \n", ret);
	ret = printf("%20p\n", p);
	printf("or %d \n\n", ret);

	ret = ft_printf("%5c\n", 'c');
	printf("my %d\n", ret);
	ret = printf("%5c\n", 'c');
	printf("or %d \n\n", ret);

	ret = ft_printf("%10s\n", str);
	printf("my %d\n", ret);
	ret = printf("%10s\n", str);
	printf("or %d\n\n", ret);

	ret = ft_printf("%10i\n", i);
	printf("my %d\n", ret);
	ret = printf("%10i\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%15d\n", j);
	printf("my %d\n", ret);
	ret = printf("%15d\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("%15d\n", k);
	printf("my %d\n", ret);
	ret = printf("%15d\n", k);
	printf("or %d\n\n", ret);

	ret = ft_printf("%18o\n", u);
	printf("my %d\n", ret);
	ret = printf("%18o\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%18u\n", u);
	printf("my %d\n", ret);
	ret = printf("%18u\n", u);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%20x\n", u);
	printf("my %d\n", ret);
	ret = printf("%20x\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%20X\n", u);
	printf("my %d\n", ret);
	ret = printf("%20X\n", u);
	printf("or %d\n\n", ret);
	
	printf("\n¤¤¤ WITH PRECISION ¤¤¤\n");

	// // ret = ft_printf("%.0c\n", 'c'); // . not used with cp
	// // printf("my %d\n", ret);
	// // ret = printf("%.5c\n", 'c');
	// // printf("or %d \n\n", ret);

	// // ret = ft_printf("%.21p\n", p);
	// // printf("my %d \n", ret);
	// // ret = printf("%.21p\n", p);
	// // printf("or %d \n\n", ret);

	ret = ft_printf("%.4s\n", str);
	printf("my %d\n", ret);
	ret = printf("%.4s\n", str);
	printf("or %d\n\n", ret);

	ret = ft_printf("%.0s\n", str);
	printf("my %d\n", ret);
	ret = printf("%.0s\n", str);
	printf("or %d\n\n", ret);

	ret = ft_printf("%.0i\n", i);
	printf("my %d\n", ret);
	ret = printf("%.0i\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%.10d\n", i);
	printf("my %d\n", ret);
	ret = printf("%.10d\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%.10d\n", j);
	printf("my %d\n", ret);
	ret = printf("%.10d\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("%.10d\n", k);
	printf("my %d\n", ret);
	ret = printf("%.10d\n", k);
	printf("or %d\n\n", ret);

	ret = ft_printf("%.23o\n", u);
	printf("my %d\n", ret);
	ret = printf("%.23o\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%.23u\n", u);
	printf("my %d\n", ret);
	ret = printf("%.23u\n", u);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%.23x\n", u);
	printf("my %d\n", ret);
	ret = printf("%.23x\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%.23X\n", u);
	printf("my %d\n", ret);
	ret = printf("%.23X\n", u);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ FLAGS WITH WIDTH ¤¤¤\n");

	printf("\n¤¤¤ ZERO ¤¤¤\n");

	// // ret = ft_printf("%020p\n", p); // 0 not used with scp
	// // printf("my %d \n", ret);
	// // ret = printf("%020p\n", p);
	// // printf("or %d \n\n", ret);

	// // ret = ft_printf("%05c\n", 'c'); 
	// // printf("my %d\n", ret);
	// // ret = printf("%05c\n", 'c');
	// // printf("or %d \n\n", ret);

	// // ret = ft_printf("%010s\n", str);
	// // printf("my %d\n", ret);
	// // ret = printf("%010s\n", str);
	// // printf("or %d\n\n", ret);

	ret = ft_printf("%010i\n", i);
	printf("my %d\n", ret);
	ret = printf("%010i\n", i);
	printf("my %d\n\n", ret);
	
	ret = ft_printf("%015d\n", i);
	printf("my %d\n", ret);
	ret = printf("%015d\n", i);
	printf("my %d\n\n", ret);

	ret = ft_printf("%010i\n", j);
	printf("my %d\n", ret);
	ret = printf("%010i\n", j);
	printf("my %d\n\n", ret);
	
	ret = ft_printf("%015d\n", j);
	printf("my %d\n", ret);
	ret = printf("%015d\n", j);
	printf("my %d\n\n", ret);

	ret = ft_printf("%010i\n", k);
	printf("my %d\n", ret);
	ret = printf("%010i\n", k);
	printf("my %d\n\n", ret);
	
	ret = ft_printf("%015d\n", k);
	printf("my %d\n", ret);
	ret = printf("%015d\n", k);
	printf("my %d\n\n", ret);

	ret = ft_printf("%020o\n", u);
	printf("my %d\n", ret);
	ret = printf("%020o\n", u);
	printf("my %d\n\n", ret);

	ret = ft_printf("%020u\n", u);
	printf("my %d\n", ret);
	ret = printf("%020u\n", u);
	printf("my %d\n\n", ret);
	
	ret = ft_printf("%020x\n", u);
	printf("my %d\n", ret);
	ret = printf("%020x\n", u);
	printf("my %d\n\n", ret);

	ret = ft_printf("%020X\n", u);
	printf("my %d\n", ret);
	ret = printf("%020X\n", u);
	printf("my %d\n\n", ret);

	printf("\n¤¤¤ PLUS ¤¤¤\n");

	// // ret = ft_printf("%+20p\n", p); // + not used with scp
	// // printf("my %d \n", ret);
	// // ret = printf("%+20p\n", p);
	// // printf("or %d \n\n", ret);

	// // ret = ft_printf("%+5s\n", str); 
	// // printf("my %d\n", ret);
	// // ret = printf("%+5s\n", str);
	// // printf("or %d\n\n", ret);

	// // ret = ft_printf("%+5c\n", 'c'); 
	// // printf("my %d\n", ret);
	// // ret = printf("%+5c\n", 'c');
	// // printf("or %d \n\n", ret);

	ret = ft_printf("%+10i\n", i);
	printf("my %d\n", ret);
	ret = printf("%+10i\n", i);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%+10d\n", i);
	printf("my %d\n", ret);
	ret = printf("%+10d\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%+10i\n", j);
	printf("my %d\n", ret);
	ret = printf("%+10i\n", j);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%+10d\n", j);
	printf("my %d\n", ret);
	ret = printf("%+10d\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("%+20i\n", k);
	printf("my %d\n", ret);
	ret = printf("%+20i\n", k);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%+20d\n", k);
	printf("my %d\n", ret);
	ret = printf("%+20d\n", k);
	printf("or %d\n\n", ret);

	// // ret = ft_printf("%+o\n", u);//+ not used with unsigned ints
	// // printf("my %d\n", ret);
	// // ret = printf("%+o\n", u);
	// // printf("my %d\n\n", ret);

	// // ret = ft_printf("%+u\n", u);
	// // printf("my %d\n", ret);
	// // ret = printf("%+u\n", u);
	// // printf("my %d\n\n", ret);
	
	// // ret = ft_printf("%+x\n", u);
	// // printf("my %d\n", ret);
	// // ret = printf("%+x\n", u);
	// // printf("my %d\n\n", ret);

	// // ret = ft_printf("%+X\n", u);
	// // printf("my %d\n", ret);
	// // ret = printf("%+X\n", u);
	// // printf("my %d\n\n", ret);

	printf("\n¤¤¤ MINUS ¤¤¤\n");
	
	ret = ft_printf("%-15p\n", p);
	printf("my %d \n", ret);
	ret = printf("%-15p\n", p);
	printf("or %d \n\n", ret);

	ret = ft_printf("%-5c\n", 'c'); 
	printf("my %d\n", ret);
	ret = printf("%-5c\n", 'c');
	printf("or %d \n\n", ret);

	ret = ft_printf("%-11s\n", str);
	printf("my %d\n", ret);
	ret = printf("%-11s\n", str);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-21i\n", i);
	printf("my %d\n", ret);
	ret = printf("%-21i\n", i);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%-21d\n", i);
	printf("my %d\n", ret);
	ret = printf("%-21d\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-21d\n", j);
	printf("my %d\n", ret);
	ret = printf("%-21d\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-21d\n", k);
	printf("my %d\n", ret);
	ret = printf("%-21d\n", k);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-21o\n", i);
	printf("my %d\n", ret);
	ret = printf("%-21o\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-21u\n", u);
	printf("my %d\n", ret);
	ret = printf("%-21u\n", u);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%-21x\n", u);
	printf("my %d\n", ret);
	ret = printf("%-21x\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-21X\n", u);
	printf("my %d\n", ret);
	ret = printf("%-21X\n", u);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ SPACE ¤¤¤\n");
	
	// // ret = ft_printf("% 20p\n", p); // ' ' not used with scp
	// // printf("my %d \n", ret);
	// // ret = printf("% 20p\n", p);
	// // printf("or %d \n\n", ret);

	// // ret = ft_printf("% 10c\n", 'c'); 
	// // printf("my %d\n", ret);
	// // ret = printf("% 10c\n", 'c');
	// // printf("or %d \n\n", ret);

	// // ret = ft_printf("% 10s\n", str);
	// // printf("my %d\n", ret);
	// // ret = printf("% 10s\n", str);
	// // printf("or %d\n\n", ret);

	ret = ft_printf("% 11i\n", i);
	printf("my %d\n", ret);
	ret = printf("% 11i\n", i);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("% 11d\n", i);
	printf("my %d\n", ret);
	ret = printf("% 11d\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("% 11d\n", j);
	printf("my %d\n", ret);
	ret = printf("% 11d\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("% 11d\n", k);
	printf("my %d\n", ret);
	ret = printf("% 11d\n", k);
	printf("or %d\n\n", ret);

	// // ret = ft_printf("% o\n", i); // ' ' not used with ouxX
	// // printf("my %d\n", ret);
	// // ret = printf("% o\n", i);
	// // printf("my %d\n\n", ret);

	// // ret = ft_printf("% u\n", u);
	// // printf("my %d\n", ret);
	// // ret = printf("% u\n", u);
	// // printf("my %d\n\n", ret);
	
	// // ret = ft_printf("% x\n", u);
	// // printf("my %d\n", ret);
	// // ret = printf("% x\n", u);
	// // printf("my %d\n\n", ret);

	// // ret = ft_printf("% X\n", u);
	// // printf("my %d\n", ret);
	// // ret = printf("% X\n", u);
	// // printf("my %d\n\n", ret);

	printf("\n¤¤¤ HASHTAG ¤¤¤\n");
	
	// // ret = ft_printf("%#i\n", i); // not used with diu
	// // printf("my %d\n", ret);
	// // ret = printf("%#i\n", i);
	// // printf("my %d\n\n", ret);
	
	// // ret = ft_printf("%#d\n", i);
	// // printf("my %d\n", ret);
	// // ret = printf("%#d\n", i);
	// // printf("my %d\n\n", ret);

	// // ret = ft_printf("%#u\n", u);
	// // printf("my %d\n", ret);
	// // ret = printf("%#u\n", u);
	// // printf("or %d\n\n", ret);

	ret = ft_printf("%#19o\n", i);
	printf("my %d\n", ret);
	ret = printf("%#19o\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%#19x\n", u);
	printf("my %d\n", ret);
	ret = printf("%#19x\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%#19X\n", u);
	printf("my %d\n", ret);
	ret = printf("%#19X\n", u);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ ONLY WITH FLAGS ¤¤¤\n");

	printf("\n¤¤¤ ZERO ¤¤¤\n");

	// // ret = ft_printf("%020p\n", p); // 0 not used with scp
	// // printf("my %d \n", ret);
	// // ret = printf("%020p\n", p);
	// // printf("or %d \n\n", ret);

	// // ret = ft_printf("%05c\n", 'c'); 
	// // printf("my %d\n", ret);
	// // ret = printf("%05c\n", 'c');
	// // printf("or %d \n\n", ret);

	// // ret = ft_printf("%010s\n", str);
	// // printf("my %d\n", ret);
	// // ret = printf("%010s\n", str);
	// // printf("or %d\n\n", ret);

	ret = ft_printf("%0i\n", i);
	printf("my %d\n", ret);
	ret = printf("%0i\n", i);
	printf("my %d\n\n", ret);
	
	ret = ft_printf("%0d\n", i);
	printf("my %d\n", ret);
	ret = printf("%0d\n", i);
	printf("my %d\n\n", ret);

	ret = ft_printf("%0i\n", j);
	printf("my %d\n", ret);
	ret = printf("%0i\n", j);
	printf("my %d\n\n", ret);
	
	ret = ft_printf("%0d\n", j);
	printf("my %d\n", ret);
	ret = printf("%0d\n", j);
	printf("my %d\n\n", ret);

	ret = ft_printf("%0i\n", k);
	printf("my %d\n", ret);
	ret = printf("%0i\n", k);
	printf("my %d\n\n", ret);
	
	ret = ft_printf("%0d\n", k);
	printf("my %d\n", ret);
	ret = printf("%0d\n", k);
	printf("my %d\n\n", ret);

	ret = ft_printf("%0o\n", u);
	printf("my %d\n", ret);
	ret = printf("%0o\n", u);
	printf("my %d\n\n", ret);

	ret = ft_printf("%0u\n", u);
	printf("my %d\n", ret);
	ret = printf("%0u\n", u);
	printf("my %d\n\n", ret);
	
	ret = ft_printf("%0x\n", u);
	printf("my %d\n", ret);
	ret = printf("%0x\n", u);
	printf("my %d\n\n", ret);

	ret = ft_printf("%0X\n", u);
	printf("my %d\n", ret);
	ret = printf("%0X\n", u);
	printf("my %d\n\n", ret);

	printf("\n¤¤¤ PLUS ¤¤¤\n");

	// // ret = ft_printf("%+20p\n", p); // + not used with scp
	// // printf("my %d \n", ret);
	// // ret = printf("%+20p\n", p);
	// // printf("or %d \n\n", ret);

	// // ret = ft_printf("%+5s\n", str); 
	// // printf("my %d\n", ret);
	// // ret = printf("%+5s\n", str);
	// // printf("or %d\n\n", ret);

	// // ret = ft_printf("%+5c\n", 'c'); 
	// // printf("my %d\n", ret);
	// // ret = printf("%+5c\n", 'c');
	// // printf("or %d \n\n", ret);

	ret = ft_printf("%+i\n", i);
	printf("my %d\n", ret);
	ret = printf("%+i\n", i);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%+d\n", i);
	printf("my %d\n", ret);
	ret = printf("%+d\n", i);
	printf("or %d\n\n", ret);

		ret = ft_printf("%+i\n", j);
	printf("my %d\n", ret);
	ret = printf("%+i\n", j);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%+d\n", j);
	printf("my %d\n", ret);
	ret = printf("%+d\n", j);
	printf("or %d\n\n", ret);

		ret = ft_printf("%+i\n", k);
	printf("my %d\n", ret);
	ret = printf("%+i\n", k);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%+d\n", k);
	printf("my %d\n", ret);
	ret = printf("%+d\n", k);
	printf("or %d\n\n", ret);

	// // ret = ft_printf("%+o\n", u);//+ not used with unsigned ints
	// // printf("my %d\n", ret);
	// // ret = printf("%+o\n", u);
	// // printf("my %d\n\n", ret);

	// // ret = ft_printf("%+u\n", u);
	// // printf("my %d\n", ret);
	// // ret = printf("%+u\n", u);
	// // printf("my %d\n\n", ret);
	
	// // ret = ft_printf("%+x\n", u);
	// // printf("my %d\n", ret);
	// // ret = printf("%+x\n", u);
	// // printf("my %d\n\n", ret);

	// // ret = ft_printf("%+X\n", u);
	// // printf("my %d\n", ret);
	// // ret = printf("%+X\n", u);
	// // printf("my %d\n\n", ret);

	printf("\n¤¤¤ MINUS ¤¤¤\n");
	
	ret = ft_printf("%-p\n", p);
	printf("my %d \n", ret);
	ret = printf("%-p\n", p);
	printf("or %d \n\n", ret);

	ret = ft_printf("%-c\n", 'c'); 
	printf("my %d\n", ret);
	ret = printf("%-c\n", 'c');
	printf("or %d \n\n", ret);

	ret = ft_printf("%-s\n", str);
	printf("my %d\n", ret);
	ret = printf("%-s\n", str);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-i\n", i);
	printf("my %d\n", ret);
	ret = printf("%-i\n", i);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%-d\n", i);
	printf("my %d\n", ret);
	ret = printf("%-d\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-d\n", j);
	printf("my %d\n", ret);
	ret = printf("%-d\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-d\n", k);
	printf("my %d\n", ret);
	ret = printf("%-d\n", k);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-o\n", i);
	printf("my %d\n", ret);
	ret = printf("%-o\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-u\n", u);
	printf("my %d\n", ret);
	ret = printf("%-u\n", u);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%-x\n", u);
	printf("my %d\n", ret);
	ret = printf("%-x\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-X\n", u);
	printf("my %d\n", ret);
	ret = printf("%-X\n", u);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ SPACE ¤¤¤\n");
	
	// // ret = ft_printf("% 20p\n", p); // ' ' not used with scp
	// // printf("my %d \n", ret);
	// // ret = printf("% 20p\n", p);
	// // printf("or %d \n\n", ret);

	// // ret = ft_printf("% 10c\n", 'c'); 
	// // printf("my %d\n", ret);
	// // ret = printf("% 10c\n", 'c');
	// // printf("or %d \n\n", ret);

	// // ret = ft_printf("% 10s\n", str);
	// // printf("my %d\n", ret);
	// // ret = printf("% 10s\n", str);
	// // printf("or %d\n\n", ret);

	ret = ft_printf("% i\n", i);
	printf("my %d\n", ret);
	ret = printf("% i\n", i);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("% d\n", i);
	printf("my %d\n", ret);
	ret = printf("% d\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("% d\n", j);
	printf("my %d\n", ret);
	ret = printf("% d\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("% d\n", k);
	printf("my %d\n", ret);
	ret = printf("% d\n", k);
	printf("or %d\n\n", ret);

	// // ret = ft_printf("% o\n", i); // ' ' not used with ouxX
	// // printf("my %d\n", ret);
	// // ret = printf("% o\n", i);
	// // printf("my %d\n\n", ret);

	// // ret = ft_printf("% u\n", u);
	// // printf("my %d\n", ret);
	// // ret = printf("% u\n", u);
	// // printf("my %d\n\n", ret);
	
	// // ret = ft_printf("% x\n", u);
	// // printf("my %d\n", ret);
	// // ret = printf("% x\n", u);
	// // printf("my %d\n\n", ret);

	// // ret = ft_printf("% X\n", u);
	// // printf("my %d\n", ret);
	// // ret = printf("% X\n", u);
	// // printf("my %d\n\n", ret);

	printf("\n¤¤¤ HASHTAG ¤¤¤\n");
	
	// // ret = ft_printf("%#i\n", i); // not used with diu
	// // printf("my %d\n", ret);
	// // ret = printf("%#i\n", i);
	// // printf("my %d\n\n", ret);
	
	// // ret = ft_printf("%#d\n", i);
	// // printf("my %d\n", ret);
	// // ret = printf("%#d\n", i);
	// // printf("my %d\n\n", ret);

	// // ret = ft_printf("%#u\n", u);
	// // printf("my %d\n", ret);
	// // ret = printf("%#u\n", u);
	// // printf("or %d\n\n", ret);

	ret = ft_printf("%#o\n", i);
	printf("my %d\n", ret);
	ret = printf("%#o\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%#x\n", u);
	printf("my %d\n", ret);
	ret = printf("%#x\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%#X\n", u);
	printf("my %d\n", ret);
	ret = printf("%#X\n", u);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ NUMERICAL ¤¤¤\n");

	ret = ft_printf("%i\n", 234567);
	printf("my %d\n", ret);
	ret = printf("%i\n", 234567);
	printf("my %d\n\n", ret);

	ret = ft_printf("%d\n", -6789);
	printf("my %d\n", ret);
	ret = printf("%d\n", -6789);
	printf("my %d\n\n", ret);

	ret = ft_printf("%o\n", 234567);
	printf("my %d\n", ret);
	ret = printf("%o\n", 234567);
	printf("my %d\n\n", ret);

	ret = ft_printf("%u\n", 6789);
	printf("my %d\n", ret);
	ret = printf("%u\n", 6789);
	printf("my %d\n\n", ret);
	
	ret = ft_printf("%x\n", 23456789);
	printf("my %d\n", ret);
	ret = printf("%x\n", 23456789);
	printf("my %d\n\n", ret);

	ret = ft_printf("%X\n", 23456789);
	printf("my %d\n", ret);
	ret = printf("%X\n", 23456789);
	printf("my %d\n\n", ret);

	printf("\n¤¤¤ CHARS ¤¤¤\n");

	ret = ft_printf("%c\n", 'c');
	printf("my %d\n", ret);
	ret = printf("%c\n", 'c');
	printf("or %d \n\n", ret);

	ret = ft_printf("cat jumped over the %s\n", "\0");
	printf("my %d\n", ret);
	ret = printf("cat jumped over the %s\n", "\0");
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ MEMORY ADDRESS and %% ¤¤¤\n");
	
	ret = ft_printf("%p\n", p);
	printf("my %d \n", ret);
	ret = printf("%p\n", p);
	printf("or %d \n\n", ret);

	ret = ft_printf("%%");
	printf("my %d\n", ret);
	ret = printf("%%");
	printf("or %d\n\n", ret);

	// printf("000 test 1\n");
    // printf("A%cB\n", 0);
    // printf("000 test 2\n");
    // ft_printf("A%cB\n", 0);
    // printf("000 test 3\n");
    // printf("A%cB\n", -0);
    // printf("000 test 4\n");
    // ft_printf("A%cB\n", -0);
	return (0);
}
