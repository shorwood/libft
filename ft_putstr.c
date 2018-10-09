/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 14:53:46 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/09 18:06:04 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(const char *str)
{
	char *buf;

	if (!str)
		return ;
	buf = (char*)str;
	while (*buf)
		buf++;
	write(1, str, buf - str);
}
