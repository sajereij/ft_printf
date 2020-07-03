int		main()
{
	int ret;
	int i = -123;
	int j = 456;
	int k = 0;
	int l = -6789;
	unsigned int u = 123456789;
	unsigned int o = 9;
	unsigned int x = 456789;
	char p[5];
	char str[6] = "abcdef";


	// // printf("\n¤¤¤ NUMERICAL WITH WPFL ¤¤¤\n\n");

	// // ret = ft_printf("%+ 10i\n", i);
	// // printf("my %d\n", ret);
	// // ret = printf("%+ 010i\n", i);
	// // printf("my %d\n\n", ret);
	
	// // ret = ft_printf("%+ 15d\n", i);
	// // printf("my %d\n", ret);
	// // ret = printf("%+ 15d\n", i);
	// // printf("my %d\n\n", ret);

	// // ret = ft_printf("%+ 20o\n", i); // + with o
	// // printf("my %d\n", ret);
	// // ret = printf("%+ 20o\n", i);
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
	printf("\x1B[35m\n¤¤¤ +- FLAG when WIDTH greater than PRECISION ¤¤¤\n\n");

	ret = ft_printf("% +-10.9i\n", i);
	printf("my %d\n", ret);
	ret = printf("% +-10.9i\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("% +-15.9d\n", j);
	printf("my %d\n", ret);
	ret = printf("% +-15.9d\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("% +-15.9d\n", k);
	printf("my %d\n", ret);
	ret = printf("% +-15.9d\n", k);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ +- FLAG when WIDTH less than PRECISION ¤¤¤\n\n");

	ret = ft_printf("% +-10.19i\n", i);
	printf("my %d\n", ret);
	ret = printf("% -+10.19i\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("% -+9.15d\n", j);
	printf("my %d\n", ret);
	ret = printf("% -+9.15d\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("% -+9.15d\n", k);
	printf("my %d\n", ret);
	ret = printf("% -+9.15d\n", k);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ +- FLAG when WIDTH equal to PRECISION ¤¤¤\n\n");

	ret = ft_printf("%-+10.10i\n", i);
	printf("my %d\n", ret);
	ret = printf("%-+10.10i\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-+10.10d\n", j);
	printf("my %d\n", ret);
	ret = printf("%-+10.10d\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("%-+10.10d\n", k);
	printf("my %d\n", ret);
	ret = printf("%-+10.10d\n", k);
	printf("or %d\n\n\x1B[0m", ret);


printf("\x1B[34m\n¤¤¤ MINUS ' ' FLAG when WIDTH greater than PRECISION ¤¤¤\n\n");

	ret = ft_printf("%- 10.4s\n", str);
	printf("my %d\n", ret);
	ret = printf("%- 10.4s\n", str);
	printf("or %d\n\n", ret);

	ret = ft_printf("%- 10.9i\n", i);
	printf("my %d\n", ret);
	ret = printf("%- 10.9i\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%- 15.9d\n", j);
	printf("my %d\n", ret);
	ret = printf("%- 15.9d\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("% -15.9d\n", k);
	printf("my %d\n", ret);
	ret = printf("% -15.9d\n", k);
	printf("or %d\n\n", ret);

	ret = ft_printf("% -18.9o\n", u);
	printf("my %d\n", ret);
	ret = printf("% -18.9o\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("% -18.9u\n", u);
	printf("my %d\n", ret);
	ret = printf("% -18.9u\n", u);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("% -20.9x\n", u);
	printf("my %d\n", ret);
	ret = printf("% -20.9x\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("% -20.9X\n", u);
	printf("my %d\n", ret);
	ret = printf("% -20.9X\n", u);
	printf("or %d\n\n", ret);

		printf("\n¤¤¤ MINUS ' ' FLAG when WIDTH less than PRECISION ¤¤¤\n\n");

	ret = ft_printf("% -4.6s\n", str);
	printf("my %d\n", ret);
	ret = printf("% -4.6s\n", str);
	printf("or %d\n\n", ret);

	ret = ft_printf("% -10.19i\n", i);
	printf("my %d\n", ret);
	ret = printf("% -10.19i\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("% -9.15d\n", j);
	printf("my %d\n", ret);
	ret = printf("% -9.15d\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("% -9.15d\n", k);
	printf("my %d\n", ret);
	ret = printf("% -9.15d\n", k);
	printf("or %d\n\n", ret);

	ret = ft_printf("% -19.25o\n", u);
	printf("my %d\n", ret);
	ret = printf("% -19.25o\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("% -19.25u\n", u);
	printf("my %d\n", ret);
	ret = printf("% -19.25u\n", u);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("% -19.25x\n", u);
	printf("my %d\n", ret);
	ret = printf("% -19.25x\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("% -19.25X\n", u);
	printf("my %d\n", ret);
	ret = printf("% -19.25X\n", u);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ MINUS ' ' FLAGS when WIDTH equal to PRECISION ¤¤¤\n\n");

	ret = ft_printf("% -010s\n", str);
	printf("my %d\n", ret);
	ret = printf("%- 010s\n", str);
	printf("or %d\n\n", ret);

	ret = ft_printf("%- 010i\n", i);
	printf("my %d\n", ret);
	ret = printf("%- 010i\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%- 010d\n", j);
	printf("my %d\n", ret);
	ret = printf("%- 010d\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("%- 010d\n", k);
	printf("my %d\n", ret);
	ret = printf("%- 010d\n", k);
	printf("or %d\n\n", ret);

	ret = ft_printf("%- 19.19o\n", u);
	printf("my %d\n", ret);
	ret = printf("%- 19.19o\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%- 19.19u\n", u);
	printf("my %d\n", ret);
	ret = printf("%- 19.19u\n", u);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%- 19.19x\n", u);
	printf("my %d\n", ret);
	ret = printf("%- 19.19x\n", u);
	printf("or %d\n\n", ret);

printf("\x1B[31m\n¤¤¤ PLUS ' ' FLAG when WIDTH greater than PRECISION ¤¤¤\n\n");

	ret = ft_printf("%+ 10.9i\n", i);
	printf("my %d\n", ret);
	ret = printf("%+ 10.9i\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%+ 15.9d\n", j);
	printf("my %d\n", ret);
	ret = printf("%+ 15.9d\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("%+ 15.9d\n", k);
	printf("my %d\n", ret);
	ret = printf("%+ 15.9d\n", k);
	printf("or %d\n\n", ret);

		printf("\n¤¤¤ PLUS ' ' when WIDTH less than PRECISION ¤¤¤\n\n");

	ret = ft_printf("%+ 10.19i\n", i);
	printf("my %d\n", ret);
	ret = printf("%+ 10.19i\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%+ 9.15d\n", j);
	printf("my %d\n", ret);
	ret = printf("%+ 9.15d\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("%+ 9.15d\n", k);
	printf("my %d\n", ret);
	ret = printf("%+ 9.15d\n", k);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ PLUS ' ' FLAGS when WIDTH equal to PRECISION ¤¤¤\n\n");

	ret = ft_printf("%+ 10.10i\n", i);
	printf("my %d\n", ret);
	ret = printf("%+ 10.10i\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("%+ 10.10d\n", j);
	printf("my %d\n", ret);
	ret = printf("%+ 10.10d\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("%+ 10.10d\n", k);
	printf("my %d\n", ret);
	ret = printf("%+ 10.10d\n", k);
	printf("or %d\n\n", ret);

	printf("\x1B[33m\n¤¤¤ HASHTAG - FLAG when WIDTH greater than PRECISION ¤¤¤\n\n");

	ret = ft_printf("%#-18.9o\n", u);
	printf("my %d\n", ret);
	ret = printf("%#-18.9o\n", u);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%#-20.9x\n", u);
	printf("my %d\n", ret);
	ret = printf("%#-20.9x\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%#-20.9X\n", u);
	printf("my %d\n", ret);
	ret = printf("%#-20.9X\n", u);
	printf("or %d\n\n", ret);

		printf("\n¤¤¤ #- when WIDTH less than PRECISION ¤¤¤\n\n");

	ret = ft_printf("%#-19.25o\n", u);
	printf("my %d\n", ret);
	ret = printf("%#-19.25o\n", u);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%#-19.25x\n", u);
	printf("my %d\n", ret);
	ret = printf("%#-19.25x\n", u);
	printf("or %d\n\n", ret);

	ret = ft_printf("%#-19.25X\n", u);
	printf("my %d\n", ret);
	ret = printf("%#-19.25X\n", u);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ WITH #- FLAGS when WIDTH equal to PRECISION ¤¤¤\n\n");

	ret = ft_printf("%#-19.19o\n", u);
	printf("my %d\n", ret);
	ret = printf("%#-19.19o\n", u);
	printf("or %d\n\n", ret);
	
	ret = ft_printf("%#-19.19x\n", u);
	printf("my %d\n", ret);
	ret = printf("%#-19.19x\n", u);
	printf("or %d\n\n", ret);


	printf("\x1B[35m\n¤¤¤ SPACE +- FLAG when WIDTH greater than PRECISION ¤¤¤\n\n");

	ret = ft_printf("% +-10.9i\n", i);
	printf("my %d\n", ret);
	ret = printf("% +-10.9i\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("% +-15.9d\n", j);
	printf("my %d\n", ret);
	ret = printf("% +-15.9d\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("% +-15.9d\n", k);
	printf("my %d\n", ret);
	ret = printf("% +-15.9d\n", k);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ SPACE+- FLAG when WIDTH less than PRECISION ¤¤¤\n\n");

	ret = ft_printf("% +-10.19i\n", i);
	printf("my %d\n", ret);
	ret = printf("% -+10.19i\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("% -+9.15d\n", j);
	printf("my %d\n", ret);
	ret = printf("% -+9.15d\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("% -+9.15d\n", k);
	printf("my %d\n", ret);
	ret = printf("% -+9.15d\n", k);
	printf("or %d\n\n", ret);

	printf("\n¤¤¤ SPACE +- FLAG when WIDTH equal to PRECISION ¤¤¤\n\n");

	ret = ft_printf("% -+10.10i\n", i);
	printf("my %d\n", ret);
	ret = printf("% -+10.10i\n", i);
	printf("or %d\n\n", ret);

	ret = ft_printf("% -+10.10d\n", j);
	printf("my %d\n", ret);
	ret = printf("% -+10.10d\n", j);
	printf("or %d\n\n", ret);

	ret = ft_printf("% -+10.10d\n", k);
	printf("my %d\n", ret);
	ret = printf("% -+10.10d\n", k);
	printf("or %d\n\n\x1B[0m", ret);
	return (0);
}