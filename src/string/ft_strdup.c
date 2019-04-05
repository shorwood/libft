/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/05 15:12:37 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/21 02:58:42 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	char *buf;
	char *dup;

	if (!str)
		return (NULL);
	buf = (char*)str;
	while (*buf++)
		;
	if (!(dup = (char*)malloc((buf - str) * sizeof(char))))
		return (NULL);
	buf = dup;
	while (*str)
		*buf++ = *str++;
	*buf = '\0';
	return (dup);
}
