/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putstr_fd.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 14:53:46 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 20:46:10 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_fd(const char *str, int fd)
{
	char *buf;

	if (!str)
		return ;
	buf = (char*)str;
	while (*buf)
		buf++;
	write(fd, str, buf - str);
}
