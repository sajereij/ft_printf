#include "ft_printf.h"

int		ft_lllen(long long n, int base)
{
	int c;

	c = 0;
	if (n == 0)
		c = 1;
	if (n <= -1)
		c = c + 1;
	while (n != 0)
	{
		n /= base;
		c++;
	}
	return (c);
}
