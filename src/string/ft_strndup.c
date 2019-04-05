/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strndup.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/05 15:12:37 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/08 16:07:02 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strndup(const char *str, size_t len)
{
	char *buf;
	char *dup;

	if (!str)
		return (NULL);
	if (!(dup = (char*)malloc(++len * sizeof(char))))
		return (NULL);
	buf = dup;
	while (*str && --len)
		*buf++ = *str++;
	*buf = '\0';
	return (dup);
}
