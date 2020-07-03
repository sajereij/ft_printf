/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 19:18:51 by sreijola          #+#    #+#             */
/*   Updated: 2020/06/30 19:18:51 by sreijola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int		main()
{
	int ret;
	int i = 123;
	int j = -1;
	int k = 0;
	// int l = -6789
	unsigned int u = 123456789;
	// unsigned int o = 9;
	// unsigned int x = 456789
	char p[5];
	char str[6] = "abcdef";


	printf("\n¤¤¤ FLAGS WITH WIDTH ¤¤¤\n\n");

	printf("\n¤¤¤ ZERO ¤¤¤\n");

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

	printf("\n¤¤¤ HASHTAG ¤¤¤\n");
	
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

	printf("\n¤¤¤ PRECISION WITH FLAGS ¤¤¤\n\n");

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
	return (0);
}