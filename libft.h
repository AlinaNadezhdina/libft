/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcollen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:13:27 by wcollen           #+#    #+#             */
/*   Updated: 2021/10/24 18:14:22 by wcollen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
typedef struct	s_list 
{
	void			*content;
	struct s_list	*next; 
}                t_list;
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
char	*ft_strtrim(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
t_list	*ft_lstnew(void *content);
void ft_lstadd_front(t_list **lst, t_list *new);
int ft_lstsize(t_list *lst);
t_list *ft_lstlast(t_list *lst);
void ft_lstadd_back(t_list **lst, t_list *new);
void ft_lstdelone(t_list *lst, void (*del)(void*));
void ft_lstclear(t_list **lst, void (*del)(void*));
void ft_lstiter(t_list *lst, void (*f)(void *));
t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *));
#endif
