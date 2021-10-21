/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcollen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:13:27 by wcollen           #+#    #+#             */
/*   Updated: 2021/10/21 11:43:59 by wcollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>

int		ft_isalpha(int symb);
int		ft_isdigit(int symb);
int		ft_isalnum(int symb);
int		ft_isascii(int symb);
int		ft_isprint(int symb);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
size_t	ft_strlcpy(char *destination, const char *source, size_t size);	
size_t	ft_strlcat(char *destination, const char *source, size_t size);
int		ft_toupper(int symb);
int		ft_tolower(int symb);
char	*ft_strchr(const char *str, int symb);
char	*ft_strrchr(const char *str, int symb);
int		ft_strncmp(const char *str1, const char *str2, size_t num);
void	*ft_memchr(const void *str, int symb, size_t n);
char	*ft_strnstr(const char *str, const char *pattern, size_t count);
int		ft_atoi(const char *str);
int		ft_memcmp(const void *str1, const void *str2, size_t count);
void	*ft_calloc(size_t num, size_t size);
char	*ft_strdup(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
#endif
