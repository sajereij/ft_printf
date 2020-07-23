#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>

# define RED		"\x1B[31m"
# define GRN		"\x1B[32m"
# define YEL		"\x1B[33m"
# define BLU		"\x1B[34m"
# define MAG		"\x1B[35m"
# define CYN		"\x1B[36m"
# define WHT		"\x1B[37m"
# define RES		"\x1B[0m"

typedef struct	s_index
{
	int		pri;
	int		len;
	int		fd;
}				t_index;

typedef struct	s_ph
{
	int		sign;
	int		dif;
	int		zero;
	int		fzero;
	int		plus;
	int		minus;
	int		space;
	int		tag;
	int		wid;
	int		wpdif; //difference between width and prec
	int		dot; //precision detected
	int		pres;
	int		leng;
	int		type;
	char	*out; //output str
	int		zos; //zeros already added
	int		per; //double % detected
	int		null;
}				t_ph;

void		print_settings(const char *s, t_index *i);

void		ft_sign_pos_fixer(t_ph *p, int len);
void		print_struct(t_ph *p);//poista

long long	ft_pow(int base, int pow);
void		ft_strrev(char* str, int len);
char		*ft_ldtoa(long double n, int afterpoint, t_ph *p);
char		*ft_dtoa(double n, int afterpoint, t_ph *p);

int			ft_ulllen(unsigned long long n, int len);
char		*ft_ulltoa_base(unsigned long value, int base);

int			ft_lllen(long long n, int len);
char		*ft_lltoa(long long value);

void		fill_struct(char *f, t_ph *p);
void		init_structp(t_ph *p);

void		edit_output(t_ph *p);
void		unpack_type(const char *f, va_list ap, t_ph *fact);
int			ft_dist(char *p);
int			ft_printf(const char *f, ...);

int			ft_putstr_ret_fd(char const *str, int fd);
char		*ft_strndup(const char *src, int n);
char		*ft_ltoa_base(long value, int base);
char		*ft_itoa_base(int value, int base);

void		type_f(va_list ap, t_ph *p);
void		type_ouxx(char type, va_list ap, t_ph *p);
void		type_id(va_list ap, t_ph *p);
void		type_p(long ad, t_ph *p);
void		type_c(int c, t_ph *p);
void		type_s(char *s, t_ph *p);

#endif
