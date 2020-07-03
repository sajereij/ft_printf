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
	
	printf("\n¤¤¤ ONLY WITH WIDTH ¤¤¤\n\n");

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
	
	printf("\n¤¤¤ ONLY WITH PRECISION ¤¤¤\n\n");

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

	printf("\n¤¤¤ ONLY WITH FLAGS ¤¤¤\n\n");

	printf("\n¤¤¤ ZERO ¤¤¤\n");

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


	printf("\n¤¤¤ HASHTAG ¤¤¤\n");

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

	printf("\n¤¤¤ NUMERICAL ¤¤¤\n\n");

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

	printf("\n¤¤¤ CHARS ¤¤¤\n\n");

	ret = ft_printf("%c\n", 'c');
	printf("my %d\n", ret);
	ret = printf("%c\n", 'c');
	printf("or %d \n\n", ret);

	ret = ft_printf("cat jumped over the %s\n", "moon");
	printf("my %d\n", ret);
	ret = printf("cat jumped over the %s\n", "moon");
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ MEMORY ADDRESS and %% ¤¤¤\n\n");
	
	ret = ft_printf("%p\n", p);
	printf("my %d \n", ret);
	ret = printf("%p\n", p);
	printf("or %d \n\n", ret);

	ret = ft_printf("%%");
	return(0);
}