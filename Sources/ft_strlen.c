/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlen.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 17:23:57 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/02 17:42:25 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(char *str)
{
	char *buf;

	if (!str)
		return (0);
	buf = str;
	while (*buf)
		buf++;
	return (buf - str);
}
