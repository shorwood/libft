/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_string.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 19:23:29 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/07 11:24:26 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

#ifndef _FT_STRING_H
# define _FT_STRING_H

char	*ft_strcat(char *dst, const char *src);
char	*ft_strchr(const char *str, int c);
int		ft_strcmp(const char *str, const char *cmp);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strdup(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t len);
size_t	ft_strlen(const char *str);
char	*ft_strncat(char *dst, const char *src, size_t n);
int		ft_strncmp(char *str, const char *cmp, size_t len);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strnstr(const char *big, const char *ltl, size_t len);
char	*ft_strrchr(const char *str, int c);
char	*ft_strchr(const char *str, int c);

#endif
