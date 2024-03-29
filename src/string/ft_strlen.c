/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlen.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 17:23:57 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/30 15:09:16 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *str) //TODO: optimize funciton
{
	char *buf;

	if (!str)
		return (0);
	buf = (char*)str;
	while (*buf)
		buf++;
	return (buf - str);
}
