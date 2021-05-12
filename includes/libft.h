/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taichika <taichika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 13:29:52 by taichika          #+#    #+#             */
/*   Updated: 2021/05/04 09:38:10 by taichika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H
# include <unistd.h>

unsigned	long	atoi_r(const char *str, long tmp_num);
unsigned	long	space_is(const char *str);
unsigned	long	check_prefix(const char *str);
long			ft_strtol(const char *str);
int				ft_atoi(const char *str);
void			ft_bzero(void *s, size_t n);

void			*ft_calloc(size_t count, size_t size);

int				ft_isalnum(int c);

int				ft_isalpha(int c);

int				ft_isascii(int c);

int				ft_isdigit(int c);

int				ft_isprint(int str);

int				ft_count_digit(int n);
char			*ft_rec_itoa(long n, char *ans);
char			*ft_itoa(int n);

void			*ft_memccpy(void *dst, const void *src, int c, size_t n);

void			*ft_memchr(const void *s, int c, size_t n);

int				ft_memcmp(const void *s1, const void *s2, size_t n);

void			*ft_memcpy(void *dst, const void *src, size_t n);

void			*ft_memrcpy(void *dst, const void *src, size_t n);

void			*ft_memmove(void *dst, const void *src, size_t len);

void			*ft_memset(void *b, int c, size_t len);

void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

int				count_charset(char *str, char c);
char			*ft_strncpy(char *src, unsigned int n);
char			**ft_split(char const *str, char c);

char			*ft_strchr(const char *s, int c);

char			*ft_strdup(char *src);

void			*join_body(int size, char **strs, char *sep, char *ans);

char			*ft_strjoin(char const *s1, char const *s2);

size_t			ft_strlcat(char *dst, char *src, size_t dstsize);

size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);

size_t			ft_strlen(const char *s);

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int				ft_strncmp(const char *s1, const char *s2, size_t n);

char			*ft_strnstr(const char *haystack,
						const char *needle, size_t len);

char			*ft_strrchr(const char *s, int c);

char			*ft_strndup(char *src, int n);
char			*ft_strtrim(char const *s1, char const *set);

int				ft_min(int a, int b);
char			*ft_substr(char const *s, unsigned int start, size_t len);
int				ft_tolower(int c);

int				ft_toupper(int c);

#endif
