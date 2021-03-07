/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbosmer <sbosmer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 21:09:57 by sbosmer           #+#    #+#             */
/*   Updated: 2021/03/07 19:29:51 by sbosmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT2_BASE_H
# define LIBFT2_BASE_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>

# define L_MAX (9223372036854775807L)
# define L_MIN (-9223372036854775808L)
# define UL_MAX (18446744073709551615)
# define I_MAX (2147483647)
# define I_MIN (-2147483648)
# define UI_MAX (4294967295)
# define FALSE ((t_bool)0)
# define TRUE ((t_bool)1)

typedef char t_bool;

void				*ft_memset(void *source, int chr, size_t length);
void				ft_bzero(void *source, size_t length);
void				*ft_memcpy(void *target, const void *source,
	size_t length);
void				*ft_memccpy(void *target, const void *source,
	int chr, size_t length);
void				*ft_memmove(void *target, const void *source,
	size_t length);
void				*ft_memchr(const void *source, int chr, size_t length);
int					ft_memcmp(const void *in1, const void *in2, size_t length);
size_t				ft_strlen(const char *target);
char				*ft_strdup(const char *target);
char				*ft_strcpy(char *target, const char *source);
char				*ft_strncpy(char *target, const char *source,
	size_t length);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t length);
size_t				ft_strlcat(char *target, const char *source, size_t size);
char				*ft_strchr(const char *source, int chr);
char				*ft_strrchr(const char *source, int chr);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *haystack, const char *needle,
	size_t length);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t length);
int					ft_atoi(const char *str);
int					ft_isalpha(int chr);
int					ft_isdigit(int chr);
int					ft_isalnum(int chr);
int					ft_isascii(int chr);
int					ft_isprint(int chr);
int					ft_tolower(int chr);
int					ft_toupper(int chr);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **p);
char				*ft_strnew(size_t size);
void				ft_strdel(char **string);
void				ft_strclr(char *string);
void				ft_striter(char *string, void (*f)(char*));
void				ft_striteri(char *string, void (*f)(unsigned int, char*));
char				*ft_strmap(char const *string, char (*f)(char));
char				*ft_strmapi(char const *source,
	char(*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t length);
char				*ft_strsub(char const *string, unsigned int start,
	size_t length);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *string);
char				**ft_strsplit(char const *string, char chr);
char				*ft_itoa(int n);
void				ft_putchar(char chr);
void				ft_putstr(char const *string);
void				ft_putendl(char const *string);
void				ft_putnbr(int num);
void				ft_putchar_fd(char chr, int fd);
void				ft_putstr_fd(const char *string, int fd);
void				ft_putendl_fd(char const *string, int fd);
void				ft_putnbr_fd(int num, int fd);

void				*ft_realloc(void *source, size_t src_size,
	size_t new_size);
void				ft_putmem(void *ptr, size_t var_size, size_t len,
	size_t indent);
void				ft_putbyte(unsigned char c);
void				ft_putvar(void *ptr, size_t size);
void				ft_puthexbyte(unsigned char c);
void				ft_puthex(void *ptr, size_t var_size, size_t len,
	size_t indent);
void				ft_swap(int *a, int *b);
void				ft_swapd(double *a, double *b);
void				ft_swapf(float *a, float *b);
int					ft_absi(int number);

#endif
