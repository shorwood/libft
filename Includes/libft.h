/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 19:23:29 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/09 16:27:23 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef _LIBFT_H
# define _LIBFT_H
# include <unistd.h>

/*
** 'ctype.h' Functions
*/
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isblank(int c);
int		ft_iscntrl(int c);
int		ft_isdigit(int c);
int		ft_isgraph(int c);
int		ft_islower(int c);
int		ft_isprint(int c);
int		ft_ispunct(int c);
int		ft_isspace(int c);
int		ft_isupper(int c);
int		ft_isxdigit(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
/*
** 'string.h' Functions
*/
int		ft_atoi(const char *str);
void	*ft_bzero(void *mem, size_t len);
void	*ft_memccpy(void *dst, const void *src, int c, size_t len);
void	*ft_memchr(const void *mem, int byt, size_t len);
int		ft_memcmp(const void *mem, const void *cmp, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *mem, int c, size_t len);
char	*ft_strcat(char *dst, const char *src);
char	*ft_strchr(const char *str, int c);
int		ft_strcmp(const char *str, const char *cmp);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strdup(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t len);
size_t	ft_strlen(const char *str);
char	*ft_strncat(char *dst, const char *src, size_t n);
int		ft_strncmp(const char *str, const char *cmp, size_t len);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strnstr(const char *big, const char *ltl, size_t len);
char	*ft_strrchr(const char *str, int c);
char	*ft_strchr(const char *str, int c);
char	*ft_strstr(const char *big, const char *ltl);

#endif
