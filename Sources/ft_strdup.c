/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/05 15:12:37 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/03 18:44:39 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>


char	*ft_strdup(const char *str)
{
	char *buf;
	char *dup;

	buf = (char*)str;
	while (*buf++)
		;
	dup = malloc((buf - str) * sizeof(char));
	buf = dup;
	while (*str)
		*buf++ = *str++;
	*buf = '\0';
	return (dup);
}
