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
	int i = 7777;
	int j = 7777;
	int k = 7777;
	int l = -6789;

	printf("\n¤¤¤ ID WITH W multF ¤¤¤\n\n");

printf("\n¤¤¤ ZERO ¤¤¤\n");

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


	printf("\n¤¤¤ ID WITH W P multF ¤¤¤\n\n");

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
		printf("\n¤¤¤ MINUS ' ' FLAG when WIDTH less than PRECISION ¤¤¤\n\n");

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

printf("\x1B[34m\n¤¤¤ MINUS FLAG when WIDTH greater than PRECISION ¤¤¤\n\n");

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

	printf("\n¤¤¤ FLAG when WIDTH less than PRECISION ¤¤¤\n\n");

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

	printf("\n¤¤¤ WITH FLAGS when WIDTH equal to PRECISION ¤¤¤\n\n");

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

printf("\x1B[31m\n¤¤¤ PLUS FLAG when WIDTH greater than PRECISION ¤¤¤\n\n");

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

		printf("\n¤¤¤ FLAG when WIDTH less than PRECISION ¤¤¤\n\n");

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

	printf("\n¤¤¤ WITH FLAGS when WIDTH equal to PRECISION ¤¤¤\n\n");

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

		printf("\n¤¤¤ FLAG when WIDTH less than PRECISION ¤¤¤\n\n");

	printf("\n¤¤¤ WITH FLAGS when WIDTH equal to PRECISION ¤¤¤\n\n");

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


	printf("\n¤¤¤ NUMERICAL WITH WIDTH greater than PRECISION ¤¤¤\n\n");

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

		printf("\n¤¤¤ WITH WIDTH less than PRECISION ¤¤¤\n\n");

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

	printf("\n¤¤¤ WITH WIDTH equal to PRECISION ¤¤¤\n\n");

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

	printf("\n¤¤¤ PRECISION WITH FLAGS ¤¤¤\n\n");

	printf("\n¤¤¤ ZERO ¤¤¤\n");

	printf("\n¤¤¤ PLUS ¤¤¤\n");

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

	printf("\n¤¤¤ MINUS ¤¤¤\n");

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

	printf("\n¤¤¤ SPACE ¤¤¤\n");

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

	printf("\n¤¤¤ HASHTAG ¤¤¤\n");

	printf("\n¤¤¤ ALL WITH WIDTH ¤¤¤\n\n");

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
	
	printf("\n¤¤¤ WITH PRECISION ¤¤¤\n\n");

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


	printf("\n¤¤¤ NUMERICAL ¤¤¤\n\n");

	ret = ft_printf("%i\n", 234567);
	printf("my %d\n", ret);
	ret = printf("%i\n", 234567);
	printf("my %d\n\n", ret);

	ret = ft_printf("%d\n", -6789);
	printf("my %d\n", ret);
	ret = printf("%d\n", -6789);
	printf("my %d\n\n", ret);

	return (0);
}
