/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   string.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/05 08:52:38 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/17 06:14:30 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

/*
** Converts the 'str' string to lowercase.
*/
char				*ft_strtolower(char *str);

/*
** Converts the 'str' string to uppercase.
*/
char				*ft_strtoupper(char *str);

/*
** Uppercase the first character of each word of 'str' string.
*/
char				*ft_strcapitalize(char *str);
int					ft_atoi(const char *str);
void				ft_bzero(void *ptr, size_t len);
void				*ft_memccpy(void *dst, const void *src, int c, size_t len);
void				*ft_memchr(const void *ptr, int byt, size_t len);
int					ft_memcmp(const void *ptr, const void *cmp, size_t len);
void				*ft_memcpy(void *dst, const void *src, size_t len);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				ft_memdel(void **ptr);
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
#endif
