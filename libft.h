/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 19:23:29 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 22:58:59 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef _LIBFT_H
# define _LIBFT_H
# include <stdlib.h>

/*
** 'ctype.h' Functions
*/
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isblank(int c);
int					ft_iscntrl(int c);
int					ft_isdigit(int c);
int					ft_isgraph(int c);
int					ft_islower(int c);
int					ft_isprint(int c);
int					ft_ispunct(int c);
int					ft_isspace(int c);
int					ft_isupper(int c);
int					ft_isxdigit(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);
/*
** Strings Functions
*/
int					ft_atoi(const char *str);
long				ft_atol(const char *str);
long long			ft_atoll(const char *str);
void				*ft_bzero(void *mem, size_t len);
void				*ft_memccpy(void *dst, const void *src, int c, size_t len);
void				*ft_memchr(const void *mem, int byt, size_t len);
int					ft_memcmp(const void *mem, const void *cmp, size_t len);
void				*ft_memcpy(void *dst, const void *src, size_t len);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *mem, int c, size_t len);
char				*ft_strcat(char *dst, const char *src);
char				*ft_strchr(const char *str, int c);
void				ft_strclr(char *str);
int					ft_strcmp(const char *str, const char *cmp);
char				*ft_strcpy(char *dst, const char *src);
void				ft_strdel(char **str);
char				*ft_strdup(const char *str);
int					ft_strequ(const char *str, const char *equ);
int					ft_strnequ(const char *str, const char *equ, size_t len);
void				ft_striter(char *str, void (*fnc)(char*));
void				ft_striteri(char *str, void (*fnc)(unsigned int, char*));
char				*ft_strjoin(char const *dst, char const *src);
size_t				ft_strlcat(char *dst, const char *src, size_t len);
size_t				ft_strlen(const char *str);
char				*ft_strmap(char const *str, char (*fnc)(char));
char				*ft_strmapi(char const *str, char(*f)(unsigned int, char));
char				*ft_strncat(char *dst, const char *src, size_t n);
int					ft_strncmp(const char *str, const char *cmp, size_t len);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strnew(size_t len);
char				*ft_strnstr(const char *big, const char *ltl, size_t len);
char				*ft_strrchr(const char *str, int c);
char				*ft_strchr(const char *str, int c);
char				*ft_strrev(char *str);
char				**ft_strsplit(char const *str, char c);
char				*ft_strstr(const char *big, const char *ltl);
char				*ft_strsub(char const *str, unsigned int beg, size_t len);
char				*ft_strtrim(char const *str);
/*
** Standard Functions
*/
char				*ft_itoa(int x);
void				*ft_memalloc(size_t siz);
void				ft_memdel(void **mem);
void				*ft_malloc(size_t siz);
void				*ft_realloc(void *ptr, size_t siz);
void				*ft_calloc(size_t cnt, size_t siz);
/*
** Math Functions
*/
int					ft_pow(int x, int n);
int					ft_pow10(int n);
/*
** I/O Functions
*/
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl(const char *str);
void				ft_putendl_fd(const char *str, int fd);
void				ft_putstr(const char *str);
void				ft_putstr_fd(const char *str, int fd);
void				ft_putnbr(int x);
void				ft_putnbr_fd(int x, int fd);
/*
** List Functions
*/
typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;
t_list				*ft_lstnew(void const *dta, size_t siz);
void				ft_lstdelone(t_list **lst, void (*del)(void*, size_t));
void				ft_lstdel(t_list **lst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **lst, t_list *new);
void				ft_lstpush(t_list **lst, t_list *new);
void				ft_lstiter(t_list *lst, void (*fnc)(t_list *elm));
t_list				*ft_lstmap(t_list *lst, t_list *(*fnc)(t_list *elm));

#endif
