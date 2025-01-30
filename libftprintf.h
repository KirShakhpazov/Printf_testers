/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshakhpa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:54:24 by kshakhpa          #+#    #+#             */
/*   Updated: 2025/01/13 12:54:30 by kshakhpa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct s_fmt
{
	int		len;
	int		offset;
	int		pad;
	int		width;
	int		precision;
	int		hashtag;
	int		zero;
	int		minus;
	int		space;
	int		plus;
	int		dot;
	int		upper;
	int		quant;
	int		neg;
	int		isun;
	int		lilhex;
	int		bighex;
	int		noprint;
	int		single;
	char	ind;
	char	*value;
	char	*postfix;
	char	*prefix;
	char	*toprint;
	va_list	args;
}	t_fmt;

void		put_decm(t_fmt *fmt);
void		put_char(t_fmt *fmt);
void		put_hex(t_fmt *fmt);
void		put_heks(t_fmt *fmt);
void		put_perc(t_fmt *fmt);
void		put_str(t_fmt *fmt);
void		put_ptr(t_fmt *fmt);
void		put_uint(t_fmt *fmt);
void		pf_init(t_fmt *fmt);
void		pf_reset(t_fmt *fmt);
void		pf_flags(char c, t_fmt *fmt);
void		pf_prefix(t_fmt *fmt);
void		pf_postfix(t_fmt *fmt);
void		pf_toprint(t_fmt *fmt);
void		ft_putstr_fd(char *s, int fd);
void		ft_putchar_fd(char c, int fd);
void		ft_putnbr_fd(long long n, int fd);
char		*pf_types(char *vtyp, t_fmt *fmt);
char		*ft_strchr(char *str, int c);
char		*ft_caps(char *str);
char		*ft_uint(unsigned int n);
char		*ft_itoa(long long n);
char		*ft_xtoa(long long n);
char		*ft_kstoa(long long n);
char		*ft_strjoin(char const *s1, char const *s2);
int			ft_toupper(char d);
int			count_char(long long num, int base);
int			ft_strlen(const char *str);
int			ft_sign(long long nmb);
int			ft_printf(const char *vtyp, ...);
long long	ft_abst(long long nmb);

#endif
