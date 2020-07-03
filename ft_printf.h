#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdlib.h> //saako olla täällä
# include <stdio.h> //muista poistaa

// # define RED		"\x1B[31m"
// # define GRN		"\x1B[32m"
// # define YEL		"\x1B[33m"
// # define BLU		"\x1B[34m"
// # define MAG		"\x1B[35m"
// # define CYN		"\x1B[36m"
// # define WHT		"\x1B[37m"
// # define RESET	"\x1B[0m"

// char		*ft_lltoa_base(long long nbr, int base);
// char		*ft_ulltoa_base(unsigned long long nbr, int base);
// #define LENG number, with diouxX and f

// #define FLAGS (c) (c = '-' || c = '+' || c = ' ' || c = '0' || c = '#') //apostrophe not required
// #define WIDTH //(min)at least this number of chars in the output, no truncation
// #define PRES (c) (c = '.')//(max) no more than this number of chars in the output (+ rounding)

// #define TYPEC(c) (c = 's' || c = 'c' || c = 'p')
// #define TYPEN(n) ( c = 'i' || c = 'd' || c = 'f' || c = 'o' || c = 'u' || c = 'x' || c = 'X')

// #define ISDIG(c) (c >= '0' && c <= '9')

typedef struct	s_index
{
	int		pri;
	int		len;
}				t_index;

typedef struct	s_ph 
{
	int		sign;
	int		dif;
	int		zero;
	int		plus;
	int		minus;
	int		space;
	int		tag;
	int		wid;
	int		wpdif;
	int		dot; //vai presin perus arvoks -1, et tietää et on jotain
	int		pres;
	int		leng;
	int		type;
	char	*out;
}				t_ph;

void	ft_sign_pos_fixer(t_ph *p);



void	edit_output(t_ph *p);
void	unpack_type(const char *f, va_list ap, t_ph *fact);
int		ft_printf(const char *f, ...);
int		ft_dist(char *p);
int		ft_lllen(long long n);
int		ft_putstr_ret(char const *str);
int		ft_putstr_ret_per(char const *str);
int		ft_strlen_per(char const *s);
char	*ft_strndup(const char *src, int n);
void	print_struct(t_ph *p);
char	*ft_ltoa_base(long value, int base);
char	*ft_itoa_base(int value, int base);

void	type_f(va_list ap);
void	type_ouxx(char type, va_list ap, t_ph *p);
void	type_id(va_list ap, t_ph *p);
void	type_p(long ad, t_ph *p);
void	type_c(int c, t_ph *p);
void	type_s(char *s, t_ph *p);

#endif