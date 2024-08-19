/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LIBFT.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtohmeh <mtohmeh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:36:53 by mtohmeh           #+#    #+#             */
/*   Updated: 2024/08/02 15:41:09 by mtohmeh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 2
# endif

typedef struct void_list
{
	void			*content;
	struct void_list	*next;
}	void_list;

typedef struct char_list
{
	char			content;
	struct char_list	*next;
}	char_list;

char	*get_next_line(int fd);
char	*ft_substr(char const *str, size_t start, size_t len);
char	*ft_strchr(const char *str, int character);
char	*ft_strrchr(const char *str, int character);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strdup(const char *s);
char	*ft_strjoin(const char *str1, const char *str2);
char	*ft_strtrim(const char *s1, const char *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	ft_toupper(char c);
char	ft_tolower(char c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_strlen(const char *str);
int		ft_isprint(int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
int		ft_atoi(const char *str);
int		ft_lstsize(void_list *lst);
int		ft_print_adress_lower(unsigned int m);
int		ft_print_adress_upper(unsigned int m);
int		ft_print_address(void *p);
int		ft_printf(const char *str, ...);
int		ft_putchar_fd(char c, int fd);
int		ft_putlnbr(unsigned int nb);
int		ft_putnbr_fd(int n, int fd);
int		ft_putstr_fd(char *s, int fd);
int		ft_strlen(const char *str);
int		lstsize(char_list *lst);
int		exists(char_list *head);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *ptr, int value, size_t num);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putendl_fd(char *s, int fd);
void	ft_lstadd_front(void_list **lst, void_list *new_node);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	ft_lstadd_back(void_list **lst, void_list *new_node);
void	ft_lstdelone(void_list *lst, void (*del)(void*));
void	ft_lstclear(void_list **lst, void (*del)(void*));
void	ft_lstiter(void_list *lst, void (*f)(void *));
void	lstadd_back(char_list **lst, char_list *new_node);
size_t	ft_strlcpy(char *dest, const char *src, unsigned int size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
void_list	*ft_lstnew(void *content);
void_list	*ft_lstmap(void_list *lst, void *(*f)(void *), void (*del)(void *));
char_list	*lstnew(char content);
void_list	*ft_lstlast(void_list *lst);

#endif
