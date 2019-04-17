/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   io.h                                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/17 06:13:02 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/17 06:13:37 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef _LIBFT_IO_H
# define _LIBFT_IO_H
# include <stdlib.h>

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
