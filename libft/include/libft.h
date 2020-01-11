/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 21:43:16 by nben-ezr       #+#    #+#                */
/*   Updated: 2020/01/05 04:12:39 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

		/* throwback (output)*/
void			ft_putchar(char c);
void			ft_putnbr(int nbr);
void			ft_putnbr_unsigned(unsigned int nbr);
void			ft_putstr(char *str);

		/* ascii and integer conversions */
int				ft_atoi(const char *str);
char			*ft_itoa(int n);
char			*ft_itoa_base(int nbr, int base);
char			*ft_utoa_base(unsigned int nbr, int base);
char			*ft_ultoa_base(unsigned long nbr, int base);

			/*character check */
int				ft_tolower(int c);
int				ft_toupper(int c);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
unsigned int	ft_isspace(char *str);

			/* string applications */
int				ft_chrcount(char *str, char look_for);
int				ft_chrsearch(char *str, char look_for);						/* searches for a char in a string and returns 1 if found, otherwise 0. */
char			*ft_strcat(char *s1, const char *s2);						/* concatenates s2 onto s1 and returns the string. */
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);		/* concatenates src onto dst till strlen(dst) is equal to dstsize and returns the length */
char			*ft_strcpy(char *dst, const char *src);						/* copies src into dst and returns the string */
char			*ft_strncpy(char *dst, const char *src, size_t len);		/* copies src into dest depending on how long len is and returns the string */
size_t			ft_strlen(const char *s);									/* returns len of string */
int				ft_strncmp(const char *s1, const char *s2, size_t n);		/* compares string depending on size n */
int				ft_strcmp(const unsigned char *s1, const unsigned char *s2);/* compares s2 to s1 */
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);		/* copies src onto dst till strlen(dst) is equal to dstsize and returns the length */
char			*ft_substr(char const *s, unsigned int start, size_t len);	/* makes a new string of size len from the start index and returns it */
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strnstr(const char *haystack, const char *needle, \
					size_t len);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));

			/* file descriptor functions */
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

			/* memory functions */
void			ft_bzero(void *s, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memset(void *b, int c, size_t len);

			/* malloc functions */
void			*ft_calloc(size_t count, size_t size);
char			*ft_strdup(const char *s1);
char			*ft_strndup(const char *s1, size_t len);

			/* linked list functions */
t_list			*ft_lstnew(void *content);
void			ft_lstadd_back(t_list **alst, t_list *new);
void			ft_lstadd_front(t_list **alst, t_list *new);
int				ft_lstsize(t_list *lst);
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstlast(t_list *lst);
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstclear(t_list **lst, void (*del)(void*));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del) \
					(void *));

#endif
