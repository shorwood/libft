/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 19:23:29 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/10 04:55:58 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef _LIBFT_H
# define _LIBFT_H

# include <stdlib.h>
# include "ft_ctype.h"
# include "ft_string.h"
# include "ft_math.h"
# include "ft_list.h"
/*
** Bit Manipulation Functions
*/
int					ft_bitread(uint8_t byte, int i);
void				ft_bitset(uint8_t *ptr, int i);
void				ft_bitclear(uint8_t *ptr, int i);
void				ft_bitwrite(uint8_t *ptr, int i, int val);
uint16_t			ft_bit16range(uint16_t val, unsigned int i, unsigned int n);
uint16_t			ft_bit16clamp(uint16_t val, unsigned int i, unsigned int n);
__uint128_t			ft_bit128range(__uint128_t val, unsigned int i, unsigned int n);
__uint128_t			ft_bit128clamp(__uint128_t val, unsigned int i, unsigned int n);
/*
** Strings Functions
*/
int					ft_atoi(const char *str);
void				ft_bzero(void *ptr, size_t len);
void				*ft_memccpy(void *dst, const void *src, int c, size_t len);
void				*ft_memchr(const void *ptr, int byt, size_t len);
int					ft_memcmp(const void *ptr, const void *cmp, size_t len);
void				*ft_memcpy(void *dst, const void *src, size_t len);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *ptr, int c, size_t len);
void				*ft_memchg(const void **mem, const void *chg);
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
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strnjoin(char const *s1, char const *s2, size_t len);
size_t				ft_strlcat(char *dst, const char *src, size_t len);
size_t				ft_strlen(const char *str);
char				*ft_strmap(char const *str, char (*fnc)(char));
char				*ft_strmapi(char const *str, char(*f)(unsigned int, char));
char				*ft_strncat(char *dst, const char *src, size_t n);
int					ft_strncmp(const char *str, const char *cmp, size_t len);
char				*ft_strndup(const char *str, size_t len);
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
size_t				ft_strcspn(const char *str, const char *spn);
size_t				ft_strspn(const char *str, const char *spn);
char				*ft_strsep(char **str, const char *sep);
char				**ft_strprm(const char *str);
char				*ft_arrcat(const char **arr);
/*
** Standard Functions
*/
char				*ft_itoa(int x);
void				ft_memdel(void **ptr);
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
void				ft_putbits(const void *ptr, size_t siz);
void				ft_putnbits(const void *ptr, size_t siz, size_t n);

#endif
