/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/14 00:57:24 by nben-ezr       #+#    #+#                */
/*   Updated: 2020/01/12 22:19:13 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# define TRUE 1
# define FALSE 0

typedef struct	s_printf
{
	int			flag_minus;
	int			flag_plus;
	int			flag_space;
	int			flag_zero;
	int			width;
	int			precision;
	char		specifier;
	int			precision_check;
}				t_printf;

int				ft_printf(char *str, ...);
int				ft_printf_check_asterisk(va_list list, char **str);

int				ft_printf_check_all(char **input_str, int width, int precision \
										, void *arg);
void			ft_printf_check_flag(char **input_str, t_printf *format);
void			ft_printf_check_width(char **input_str, t_printf *format, \
										int width);
void			ft_printf_check_precision(char **input_str, t_printf *format, \
											int precision);
void			ft_printf_check_specifier(char **input_str, t_printf *format);
int				ft_printf_integer(t_printf *format, int arg);
int				ft_printf_integer2(t_printf *format, int arg, \
										int spaces, int zeroes);
int				ft_printf_integer3(t_printf *format, int arg);
int				ft_printf_unsigned(t_printf *format, unsigned int arg);
int				ft_printf_unsigned2(t_printf *format, int arg, \
										int spaces, int zeroes);
int				ft_printf_hex(t_printf *format, unsigned int arg);
int				ft_printf_hex_lower(t_printf *format, char *hex, int spaces, \
									int zeroes);
int				ft_printf_hex_upper(t_printf *format, char *hex, int spaces, \
									int zeroes);
int				ft_printf_string(t_printf *format, char *arg);
int				ft_printf_string2(t_printf *format, char *arg, int padding);
int				ft_printf_percentage(t_printf *format);
int				ft_printf_percentage2(t_printf *format, int arg, int spaces, \
										int zeroes);
int				ft_printf_char(t_printf *format, char c);
int				ft_printf_string(t_printf *format, char *arg);
int				ft_printf_address(t_printf *format, unsigned long arg);
int				ft_printf_address2(t_printf *format, char *hex, int spaces, \
									int zeroes);
int				ft_chrcount_till_conversion(char *str, char look_for);
int				ft_check_asterisk(char *str, char look_for);
int				ft_atoi_modified(const char *str, int *length);
int				ft_count_length_unsigned(t_printf *format, unsigned int arg);
int				ft_count_length(t_printf *format, int arg);
void			ft_putchar(char c);
int				ft_isdigit(int c);
int				ft_flag_checker(char **input_str);
int				ft_count_zeroes(t_printf *format, int len, int arg);
int				ft_count_spaces(t_printf *format, int len, int arg);
int				ft_count_spaces_string(t_printf *format, int len);
int				ft_write_zeroes(int zeroes);
int				ft_write_spaces(int spaces);
void			ft_putnbr_check(t_printf *format, int arg);
void			ft_putnbr_check_unsigned(t_printf *format, unsigned int arg);
void			ft_putnbr(int nbr);
void			ft_putnbr_unsigned(unsigned int nbr);
int				ft_check_valid(char check);
int				ft_check_valid_input(char *check);
int				ft_strlen(char *str);
void			ft_putstr(char *str);
void			ft_putstr_check(t_printf *format, char *hex);
void			ft_putstr_upper_check(t_printf *format, char *hex);
int				ft_toupper(int c);
char			*ft_strncpy(char *dst, const char *src, size_t len);
char			*ft_strdup(const char *s1);
char			*ft_strndup(const char *s1, size_t len);
char			*ft_utoa_base(int nbr, int base);
char			*ft_ultoa_base(unsigned long nbr, int base);

#endif
