/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riael <#42gether | home@42berlin>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:43:33 by riael             #+#    #+#             */
/*   Updated: 2022/11/30 15:48:23 by riael            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>
# include <stdarg.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
size_t			ft_strlen(const char *s);
int				ft_atoi(const char *str);
int				ft_countwords(const char *str, char c);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_ischars(char c, const char *charset);
int				ft_iscntrl(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				ft_isspace(char c, int type);
int				ft_memcmp(const void *s1, const void *s2, size_t len);
int				ft_tolower(int c);
int				ft_toupper(int c);
int				ft_printf(const char *str, ...);
int				ft_printf_word(const char *str, size_t i, int wordsize);
int				ft_printf_flag(va_list ap, int *j, char *alist);
int				ft_puthexnbr(unsigned int nb, int type);
int				ft_putpointer(void *p);
int				ft_countdigits(int i);
int				ft_countudigits(unsigned int i);
int				ft_calc_printed_bytes(const char *str, int *j);
int				ft_strncmp(const char *s1, const char *s2, \
						unsigned int n);
char			*ft_createword(const char *str, char c, int curword);
char			*ft_itoa(int n);
char			**ft_split(const char *s, char c);
char			**ft_splitplus(const char *str, char *charset);
char			*ft_strcat(char *dest, const char *src);
char			*ft_strchr(const char *s, int thisisstupid);
char			*ft_strchrnul(const char *s, int c);
char			*ft_get_args(const char *str);
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_substr(const char *s, unsigned int start, size_t len);
char			*ft_strdup(const char *s);
char			*ft_strrchr(const char *s, int c);
char			*ft_strrev(char *str);
char			*ft_strtrim(const char *s, const char *set);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strnew(size_t size);
char			*ft_strnstr(const char *big, const char *little, size_t len);
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char			*ft_strnew(size_t size);
char			*ft_strnstr(const char *big, const char *little, size_t len);
void			ft_strclr(char *s);
void			ft_strdel(char **s);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t n);
void			*ft_memset(void *ptr, int value, size_t num);
void			ft_putchar(char c);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl(const char *s);
void			ft_putendl_fd(const char *s, int fd);
void			ft_putnbr(int nb);
void			ft_putnbr_fd(int nb, int fd);
void			ft_putstr(const char *str);
void			ft_putstr_fd(const char *s, int fd);
void			*ft_realloc(void *ptr, size_t size);
void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t nmemb, size_t size);
void			*ft_memchr(const void *s, int c, size_t len);
void			ft_putunbr(unsigned long nb);

#endif
