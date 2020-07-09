#include "ft_printf.h"

int		ft_ulllen(unsigned long long n, int base)
{
	int c;

	c = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= base;
		c++;
	}
	return (c);
}
