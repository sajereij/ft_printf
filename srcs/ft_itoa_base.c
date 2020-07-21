#include "ft_printf.h"
#include <stdlib.h>

char	*ft_itoa_base(int value, int base)
{
	char			*out;
	char			hex_digits[] = "0123456789abcdef";	
	unsigned int	n;
	int				i;

	i = 0;
	out = malloc(sizeof(char) * (i + 1));
	n = ((base == 10 && value < 0) ? -value : (unsigned int)value);
	if (value == 0 || (value < 0 && base == 10))
		++i;
	while (n != 0)
	{
		n /= base;
		++i;
	}
	out[i] = '\0';
	if (value < 0 && base == 10)
		out[0] = '-';
	if (value == 0)
		out[0] = '0';
	n = ((base == 10 && value < 0) ? -value : (unsigned int)value);
	while (n != 0)
	{
		--i;
		out[i] = hex_digits[n % base];
		n /= base;
	}
	return (out);
}