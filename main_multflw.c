
#include <stdio.h>
#include "ft_printf.h"

int		main()
{
	int ret;
	int i = 52;
	int j = 52;
	int k = 52;
	int l = 6789;
	unsigned int u = 123456789;
	unsigned int o = 9;
	unsigned int x = 456789;
	char p[5];
	char str[6] = "abcdef";


	printf("\n¤¤¤ FLAGS WITH WIDTH ¤¤¤\n\n");

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

	ret = ft_printf("%0-+ 10i\n", i);
	printf("my %d\n", ret);
	ret = printf("%0-+ 10i\n", i);
	printf("my %d\n\n", ret);
	
	ret = ft_printf("%0- 15d\n", i);
	printf("my %d\n", ret);
	ret = printf("%0- 15d\n", i);
	printf("my %d\n\n", ret);

	ret = ft_printf("%0 +10i\n", j);
	printf("my %d\n", ret);
	ret = printf("%0 +10i\n", j);
	printf("my %d\n\n", ret);
	
	ret = ft_printf("%0-+15d\n", j);
	printf("my %d\n", ret);
	ret = printf("%0-+15d\n", j);
	printf("my %d\n\n", ret);

	ret = ft_printf("%0-10i\n", k);
	printf("my %d\n", ret);
	ret = printf("%0-10i\n", k);
	printf("my %d\n\n", ret);
	
	ret = ft_printf("%0 10i\n", k); //virhe
	printf("my %d\n", ret);
	ret = printf("%0 10i\n", k);
	printf("my %d\n\n", ret);

	ret = ft_printf("%0+15d\n", k);
	printf("my %d\n", ret);
	ret = printf("%0+15d\n", k);
	printf("my %d\n\n", ret);




	printf("\n¤¤¤ PLUS ¤¤¤\n");

	ret = ft_printf("%+-10i\n", i);
	printf("my %d\n", ret);
	ret = printf("%+-10i\n", i);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%+ 10d\n", i);
	printf("my %d\n", ret);
	ret = printf("%+ 10d\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%+ 10i\n", j);
	printf("my %d\n", ret);
	ret = printf("%+ 10i\n", j);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%+-10d\n", j);
	printf("my %d\n", ret);
	ret = printf("%+-10d\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("%- +20i\n", k);
	printf("my %d\n", ret);
	ret = printf("%- +20i\n", k);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%- 20d\n", k);
	printf("my %d\n", ret);
	ret = printf("%- 20d\n", k);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ ouxX ¤¤¤\n");

	printf("\n¤¤¤ HASHTAG MINUS ¤¤¤\n");

	ret = ft_printf("%-#19o\n", i); 
	printf("my %d\n", ret);
	ret = printf("%-#19o\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-#19x\n", u);
	printf("my %d\n", ret);
	ret = printf("%-#19x\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-#19X\n", u);
	printf("my %d\n", ret);
	ret = printf("%-#19X\n", u);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ 0 MINUS ¤¤¤\n");

	ret = ft_printf("%0-21o\n", i);
	printf("my %d\n", ret);
	ret = printf("%0-21o\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%0-21u\n", u);
	printf("my %d\n", ret);
	ret = printf("%0-21u\n", u);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%0-21x\n", u);
	printf("my %d\n", ret);
	ret = printf("%0-21x\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%0-21X\n", u);
	printf("my %d\n", ret);
	ret = printf("%0-21X\n", u);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ 0 HASHTAG ¤¤¤\n");

	ret = ft_printf("%0#19o\n", i); //seuraavat kolme falskaa
	printf("my %d\n", ret);			// tää on jännä, ei näy, myös seuraavat kaks on viks
	ret = printf("%0#19o\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%0#19x\n", u);
	printf("my %d\n", ret);
	ret = printf("%0#19x\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%0#19X\n", u);
	printf("my %d\n", ret);
	ret = printf("%0#19X\n", u);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ 0 MINUS HASHTAG ¤¤¤\n");
	
	ret = ft_printf("%0-#20o\n", u);
	printf("my %d\n", ret);
	ret = printf("%0-#20o\n", u);
	printf("my %d\n\n", ret);
	
	ret = ft_printf("%0-#20x\n", u);
	printf("my %d\n", ret);
	ret = printf("%0-#20x\n", u);
	printf("my %d\n\n", ret);

	ret = ft_printf("%0-#20X\n", u);
	printf("my %d\n", ret);
	ret = printf("%0-#20X\n", u);
	printf("my %d\n\n", ret);

	return(0);
}