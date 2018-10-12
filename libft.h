/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 19:23:29 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/12 08:54:09 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef _LIBFT_H
# define _LIBFT_H
# include <unistd.h>

/*
** 'ctype.h' Functions
*/
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isblank(int c);
int			ft_iscntrl(int c);
int			ft_isdigit(int c);
int			ft_isgraph(int c);
int			ft_islower(int c);
int			ft_isprint(int c);
int			ft_ispunct(int c);
int			ft_isspace(int c);
int			ft_isupper(int c);
int			ft_isxdigit(int c);
int			ft_tolower(int c);
int			ft_toupper(int c);
/*
** Strings Functions
*/
int			ft_atoi(const char *str);
long		ft_atol(const char *str);
long long	ft_atoll(const char *str);
void		*ft_bzero(void *mem, size_t len);
void		*ft_memccpy(void *dst, const void *src, int c, size_t len);
void		*ft_memchr(const void *mem, int byt, size_t len);
int			ft_memcmp(const void *mem, const void *cmp, size_t len);
void		*ft_memcpy(void *dst, const void *src, size_t len);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memset(void *mem, int c, size_t len);
char		*ft_strcat(char *dst, const char *src);
char		*ft_strchr(const char *str, int c);
void		ft_strclr(char *str);
int			ft_strcmp(const char *str, const char *cmp);
char		*ft_strcpy(char *dst, const char *src);
void		ft_strdel(char **str);
char		*ft_strdup(const char *str);
void		ft_striter(char *str, void (*fnc)(char*));
void		ft_striteri(char *str, void (*fnc)(unsigned int, char*));
size_t		ft_strlcat(char *dst, const char *src, size_t len);
size_t		ft_strlen(const char *str);
char		*ft_strmap(char const *str, char (*fnc)(char));
char		*ft_strmapi(char const *str, char (*fnc)(unsigned int, char));
char		*ft_strncat(char *dst, const char *src, size_t n);
int			ft_strncmp(const char *str, const char *cmp, size_t len);
char		*ft_strncpy(char *dst, const char *src, size_t len);
char		*ft_strnew(size_t len);
char		*ft_strnstr(const char *big, const char *ltl, size_t len);
char		*ft_strrchr(const char *str, int c);
char		*ft_strchr(const char *str, int c);
char		*ft_strrev(char *str);
char		*ft_strstr(const char *big, const char *ltl);
/*
** Standard Functions
*/
char		*ft_itoa(int x);
void		*ft_memalloc(size_t siz);
void		ft_memdel(void **mem);
/*
** Math Functions
*/
int			ft_pow(int x, int n);
int			ft_pow10(int n);
/*
** I/O Functions
*/
void		ft_putchar(char c);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl(const char *str);
void		ft_putendl_fd(const char *str, int fd);
void		ft_putstr(const char *str);
void		ft_putstr_fd(const char *str, int fd);
void		ft_putnbr(int x);
void		ft_putnbr_fd(int x, int fd);
#endif
