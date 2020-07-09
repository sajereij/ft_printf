/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_len.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 17:22:59 by sreijola          #+#    #+#             */
/*   Updated: 2020/07/03 17:22:59 by sreijola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		main()	
{
	int ret;
	int i = '6';
	int j = 'a';
	int k = 45;
	int l = -2000;
	unsigned int u = 'h';
	unsigned int o = 9;
	unsigned int x = 456789;
	char p[5];
	char str[6] = "abcdef";


	
	printf("\n¤¤¤ NUMERICAL WITH LENGHT CONVERSIONS ¤¤¤\n\n");

	printf("\n¤¤¤ l ¤¤¤\n");

	printf("\n¤¤¤ FLAGS WITH WIDTH ¤¤¤\n\n");

	printf("\n¤¤¤ ZERO ¤¤¤\n");

	ret = ft_printf("%0-+ 10li\n", i);
	printf("my %d\n", ret);
	ret = printf("%0-+ 10li\n", i);
	printf("my %d\n\n", ret);
	
	ret = ft_printf("%0- 15ld\n", i);
	printf("my %d\n", ret);
	ret = printf("%0- 15ld\n", i);
	printf("my %d\n\n", ret);

	ret = ft_printf("%0 +10li\n", j);
	printf("my %d\n", ret);
	ret = printf("%0 +10li\n", j);
	printf("my %d\n\n", ret);
	
	ret = ft_printf("%0-+15ld\n", j);
	printf("my %d\n", ret);
	ret = printf("%0-+15ld\n", j);
	printf("my %d\n\n", ret);

	ret = ft_printf("%0-10li\n", k);
	printf("my %d\n", ret);
	ret = printf("%0-10li\n", k);
	printf("my %d\n\n", ret);
	
	ret = ft_printf("%0 10li\n", k);
	printf("my %d\n", ret);
	ret = printf("%0 10li\n", k);
	printf("my %d\n\n", ret);

	ret = ft_printf("%0+15ld\n", k);
	printf("my %d\n", ret);
	ret = printf("%0+15ld\n", k);
	printf("my %d\n\n", ret);


	printf("\n¤¤¤ PLUS ¤¤¤\n");

	ret = ft_printf("%+-10li\n", i);
	printf("my %d\n", ret);
	ret = printf("%+-10li\n", i);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%+ 10ld\n", i);
	printf("my %d\n", ret);
	ret = printf("%+ 10ld\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%+ 10li\n", j);
	printf("my %d\n", ret);
	ret = printf("%+ 10li\n", j);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%+-10ld\n", j);
	printf("my %d\n", ret);
	ret = printf("%+-10ld\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("%- +20li\n", k);
	printf("my %d\n", ret);
	ret = printf("%- +20li\n", k);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%- 20ld\n", k);
	printf("my %d\n", ret);
	ret = printf("%- 20ld\n", k);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ ouxX ¤¤¤\n");

	printf("\n¤¤¤ HASHTAG MINUS ¤¤¤\n");

	ret = ft_printf("%-#19lo\n", i); 
	printf("my %d\n", ret);
	ret = printf("%-#19lo\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-#1l9x\n", u);
	printf("my %d\n", ret);
	ret = printf("%-#19lx\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-#19lX\n", u);
	printf("my %d\n", ret);
	ret = printf("%-#19lX\n", u);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ 0 MINUS ¤¤¤\n");

	ret = ft_printf("%0-21lo\n", i);
	printf("my %d\n", ret);
	ret = printf("%0-21lo\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%0-21lu\n", u);
	printf("my %d\n", ret);
	ret = printf("%0-21lu\n", u);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%0-21lx\n", u);
	printf("my %d\n", ret);
	ret = printf("%0-21lx\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%0-21lX\n", u);
	printf("my %d\n", ret);
	ret = printf("%0-21lX\n", u);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ 0 HASHTAG ¤¤¤\n");

	ret = ft_printf("%0#19lo\n", i); //seuraavat kolme falskaa
	printf("my %d\n", ret);			// tää on jännä, ei näy, myös seuraavat kaks on viks
	ret = printf("%0#19lo\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%0#19lx\n", u);
	printf("my %d\n", ret);
	ret = printf("%0#19lx\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%0#19lX\n", u);
	printf("my %d\n", ret);
	ret = printf("%0#19lX\n", u);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ 0 MINUS HASHTAG ¤¤¤\n");
	
	ret = ft_printf("%0-#20lo\n", u);
	printf("my %d\n", ret);
	ret = printf("%0-#20lo\n", u);
	printf("my %d\n\n", ret);
	
	ret = ft_printf("%0-#20lx\n", u);
	printf("my %d\n", ret);
	ret = printf("%0-#20lx\n", u);
	printf("my %d\n\n", ret);

	ret = ft_printf("%0-#20lX\n", u);
	printf("my %d\n", ret);
	ret = printf("%0-#20lX\n", u);
	printf("my %d\n\n", ret);

	printf("\n¤¤¤ ll ¤¤¤\n");

	printf("\n¤¤¤ FllAGS WITH WIDTH ¤¤¤\n\n");

	printf("\n¤¤¤ ZERO ¤¤¤\n");

	ret = ft_printf("%0-+ 10lli\n", i);
	printf("my %d\n", ret);
	ret = printf("%0-+ 10lli\n", i);
	printf("my %d\n\n", ret);
	
	ret = ft_printf("%0- 15lld\n", i);
	printf("my %d\n", ret);
	ret = printf("%0- 15lld\n", i);
	printf("my %d\n\n", ret);

	ret = ft_printf("%0 +10lli\n", j);
	printf("my %d\n", ret);
	ret = printf("%0 +10lli\n", j);
	printf("my %d\n\n", ret);
	
	ret = ft_printf("%0-+15lld\n", j);
	printf("my %d\n", ret);
	ret = printf("%0-+15lld\n", j);
	printf("my %d\n\n", ret);

	ret = ft_printf("%0-10lli\n", k);
	printf("my %d\n", ret);
	ret = printf("%0-10lli\n", k);
	printf("my %d\n\n", ret);
	
	ret = ft_printf("%0 10lli\n", k);
	printf("my %d\n", ret);
	ret = printf("%0 10lli\n", k);
	printf("my %d\n\n", ret);

	ret = ft_printf("%0+15lld\n", k);
	printf("my %d\n", ret);
	ret = printf("%0+15lld\n", k);
	printf("my %d\n\n", ret);

	printf("\n¤¤¤ PllUS ¤¤¤\n");

	ret = ft_printf("%+-10lli\n", i);
	printf("my %d\n", ret);
	ret = printf("%+-10lli\n", i);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%+ 10lld\n", i);
	printf("my %d\n", ret);
	ret = printf("%+ 10lld\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%+ 10lli\n", j);
	printf("my %d\n", ret);
	ret = printf("%+ 10lli\n", j);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%+-10lld\n", j);
	printf("my %d\n", ret);
	ret = printf("%+-10lld\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("%- +20lli\n", k);
	printf("my %d\n", ret);
	ret = printf("%- +20lli\n", k);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%- 20lld\n", k);
	printf("my %d\n", ret);
	ret = printf("%- 20lld\n", k);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ ouxX ¤¤¤\n");

	printf("\n¤¤¤ HASHTAG MINUS ¤¤¤\n");

	ret = ft_printf("%-#19llo\n", i); 
	printf("my %d\n", ret);
	ret = printf("%-#19llo\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-#1ll9x\n", u);
	printf("my %d\n", ret);
	ret = printf("%-#19llx\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-#19llX\n", u);
	printf("my %d\n", ret);
	ret = printf("%-#19llX\n", u);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ 0 MINUS ¤¤¤\n");

	ret = ft_printf("%0-21llo\n", i);
	printf("my %d\n", ret);
	ret = printf("%0-21llo\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%0-21llu\n", u);
	printf("my %d\n", ret);
	ret = printf("%0-21llu\n", u);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%0-21llx\n", u);
	printf("my %d\n", ret);
	ret = printf("%0-21llx\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%0-21llX\n", u);
	printf("my %d\n", ret);
	ret = printf("%0-21llX\n", u);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ 0 HASHTAG ¤¤¤\n");

	ret = ft_printf("%0#19llo\n", i);
	printf("my %d\n", ret);		
	ret = printf("%0#19llo\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%0#19llx\n", u);
	printf("my %d\n", ret);
	ret = printf("%0#19llx\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%0#19llX\n", u);
	printf("my %d\n", ret);
	ret = printf("%0#19llX\n", u);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ 0 MINUS HASHTAG ¤¤¤\n");
	
	ret = ft_printf("%0-#20llo\n", u);
	printf("my %d\n", ret);
	ret = printf("%0-#20llo\n", u);
	printf("my %d\n\n", ret);
	
	ret = ft_printf("%0-#20llx\n", u);
	printf("my %d\n", ret);
	ret = printf("%0-#20llx\n", u);
	printf("my %d\n\n", ret);

	ret = ft_printf("%0-#20llX\n", u);
	printf("my %d\n", ret);
	ret = printf("%0-#20llX\n", u);
	printf("my %d\n\n", ret);

	printf("\n¤¤¤ hh ¤¤¤\n");

	printf("\n¤¤¤ FhhAGS WITH WIDTH ¤¤¤\n\n");

	printf("\n¤¤¤ ZERO ¤¤¤\n");

	ret = ft_printf("%0-+ 10hhi\n", i);
	printf("my %d\n", ret);
	ret = printf("%0-+ 10hhi\n", i);
	printf("my %d\n\n", ret);
	
	ret = ft_printf("%0- 15hhd\n", i);
	printf("my %d\n", ret);
	ret = printf("%0- 15hhd\n", i);
	printf("my %d\n\n", ret);

	ret = ft_printf("%0 +10hhi\n", j);
	printf("my %d\n", ret);
	ret = printf("%0 +10hhi\n", j);
	printf("my %d\n\n", ret);
	
	ret = ft_printf("%0-+15hhd\n", j);
	printf("my %d\n", ret);
	ret = printf("%0-+15hhd\n", j);
	printf("my %d\n\n", ret);

	ret = ft_printf("%0-10hhi\n", k);
	printf("my %d\n", ret);
	ret = printf("%0-10hhi\n", k);
	printf("my %d\n\n", ret);
	
	ret = ft_printf("%0 10hhi\n", k);
	printf("my %d\n", ret);
	ret = printf("%0 10hhi\n", k);
	printf("my %d\n\n", ret);

	ret = ft_printf("%0+15hhd\n", k);
	printf("my %d\n", ret);
	ret = printf("%0+15hhd\n", k);
	printf("my %d\n\n", ret);

	printf("\n¤¤¤ PhhUS ¤¤¤\n");

	ret = ft_printf("%+-10hhi\n", i);
	printf("my %d\n", ret);
	ret = printf("%+-10hhi\n", i);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%+ 10hhd\n", i);
	printf("my %d\n", ret);
	ret = printf("%+ 10hhd\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%+ 10hhi\n", j);
	printf("my %d\n", ret);
	ret = printf("%+ 10hhi\n", j);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%+-10hhd\n", j);
	printf("my %d\n", ret);
	ret = printf("%+-10hhd\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("%- +20hhi\n", k);
	printf("my %d\n", ret);
	ret = printf("%- +20hhi\n", k);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%- 20hhd\n", k);
	printf("my %d\n", ret);
	ret = printf("%- 20hhd\n", k);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ ouxX ¤¤¤\n");

	printf("\n¤¤¤ HASHTAG MINUS ¤¤¤\n");

	ret = ft_printf("%-#19hho\n", i); 
	printf("my %d\n", ret);
	ret = printf("%-#19hho\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-#1hh9x\n", u);
	printf("my %d\n", ret);
	ret = printf("%-#19hhx\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-#19hhX\n", u);
	printf("my %d\n", ret);
	ret = printf("%-#19hhX\n", u);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ 0 MINUS ¤¤¤\n");

	ret = ft_printf("%0-21hho\n", i);
	printf("my %d\n", ret);
	ret = printf("%0-21hho\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%0-21hhu\n", u);
	printf("my %d\n", ret);
	ret = printf("%0-21hhu\n", u);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%0-21hhx\n", u);
	printf("my %d\n", ret);
	ret = printf("%0-21hhx\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%0-21hhX\n", u);
	printf("my %d\n", ret);
	ret = printf("%0-21hhX\n", u);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ 0 HASHTAG ¤¤¤\n");

	ret = ft_printf("%0#19hho\n", i);
	printf("my %d\n", ret);		
	ret = printf("%0#19hho\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%0#19hhx\n", u);
	printf("my %d\n", ret);
	ret = printf("%0#19hhx\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%0#19hhX\n", u);
	printf("my %d\n", ret);
	ret = printf("%0#19hhX\n", u);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ 0 MINUS HASHTAG ¤¤¤\n");
	
	ret = ft_printf("%0-#20hho\n", u);
	printf("my %d\n", ret);
	ret = printf("%0-#20hho\n", u);
	printf("my %d\n\n", ret);
	
	ret = ft_printf("%0-#20hhx\n", u);
	printf("my %d\n", ret);
	ret = printf("%0-#20hhx\n", u);
	printf("my %d\n\n", ret);

	ret = ft_printf("%0-#20hhX\n", u);
	printf("my %d\n", ret);
	ret = printf("%0-#20hhX\n", u);
	printf("my %d\n\n", ret);


	printf("\n¤¤¤ h ¤¤¤\n");


	printf("\n¤¤¤ FhAGS WITH WIDTH ¤¤¤\n\n");

	printf("\n¤¤¤ ZERO ¤¤¤\n");

	ret = ft_printf("%0-+ 10hi\n", i);
	printf("my %d\n", ret);
	ret = printf("%0-+ 10hi\n", i);
	printf("my %d\n\n", ret);
	
	ret = ft_printf("%0- 15hd\n", i);
	printf("my %d\n", ret);
	ret = printf("%0- 15hd\n", i);
	printf("my %d\n\n", ret);

	ret = ft_printf("%0 +10hi\n", j);
	printf("my %d\n", ret);
	ret = printf("%0 +10hi\n", j);
	printf("my %d\n\n", ret);
	
	ret = ft_printf("%0-+15hd\n", j);
	printf("my %d\n", ret);
	ret = printf("%0-+15hd\n", j);
	printf("my %d\n\n", ret);

	ret = ft_printf("%0-10hi\n", k);
	printf("my %d\n", ret);
	ret = printf("%0-10hi\n", k);
	printf("my %d\n\n", ret);
	
	ret = ft_printf("%0 10hi\n", k);
	printf("my %d\n", ret);
	ret = printf("%0 10hi\n", k);
	printf("my %d\n\n", ret);

	ret = ft_printf("%0+15hd\n", k);
	printf("my %d\n", ret);
	ret = printf("%0+15hd\n", k);
	printf("my %d\n\n", ret);

	printf("\n¤¤¤ PhUS ¤¤¤\n");

	ret = ft_printf("%+-10hi\n", i);
	printf("my %d\n", ret);
	ret = printf("%+-10hi\n", i);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%+ 10hd\n", i);
	printf("my %d\n", ret);
	ret = printf("%+ 10hd\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%+ 10hi\n", j);
	printf("my %d\n", ret);
	ret = printf("%+ 10hi\n", j);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%+-10hd\n", j);
	printf("my %d\n", ret);
	ret = printf("%+-10hd\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("%- +20hi\n", k);
	printf("my %d\n", ret);
	ret = printf("%- +20hi\n", k);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%- 20hd\n", k);
	printf("my %d\n", ret);
	ret = printf("%- 20hd\n", k);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ ouxX ¤¤¤\n");

	printf("\n¤¤¤ HASHTAG MINUS ¤¤¤\n");

	ret = ft_printf("%-#19ho\n", i); 
	printf("my %d\n", ret);
	ret = printf("%-#19ho\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-#1h9x\n", u);
	printf("my %d\n", ret);
	ret = printf("%-#19hx\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-#19hX\n", u);
	printf("my %d\n", ret);
	ret = printf("%-#19hX\n", u);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ 0 MINUS ¤¤¤\n");

	ret = ft_printf("%0-21ho\n", i);
	printf("my %d\n", ret);
	ret = printf("%0-21ho\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%0-21hu\n", u);
	printf("my %d\n", ret);
	ret = printf("%0-21hu\n", u);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%0-21hx\n", u);
	printf("my %d\n", ret);
	ret = printf("%0-21hx\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%0-21hX\n", u);
	printf("my %d\n", ret);
	ret = printf("%0-21hX\n", u);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ 0 HASHTAG ¤¤¤\n");

	ret = ft_printf("%0#19ho\n", i);
	printf("my %d\n", ret);		
	ret = printf("%0#19ho\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%0#19hx\n", u);
	printf("my %d\n", ret);
	ret = printf("%0#19hx\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%0#19hX\n", u);
	printf("my %d\n", ret);
	ret = printf("%0#19hX\n", u);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ 0 MINUS HASHTAG ¤¤¤\n");
	
	ret = ft_printf("%0-#20ho\n", u);
	printf("my %d\n", ret);
	ret = printf("%0-#20ho\n", u);
	printf("my %d\n\n", ret);
	
	ret = ft_printf("%0-#20hx\n", u);
	printf("my %d\n", ret);
	ret = printf("%0-#20hx\n", u);
	printf("my %d\n\n", ret);

	ret = ft_printf("%0-#20hX\n", u);
	printf("my %d\n", ret);
	ret = printf("%0-#20hX\n", u);
	printf("my %d\n\n", ret);

	return (0);
}