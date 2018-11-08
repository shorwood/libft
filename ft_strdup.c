/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/05 15:12:37 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/08 10:07:55 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char *buf;
	char *dup;

	if (!str)
		return (NULL);
	buf = (char*)str;
	while (*buf++)
		;
	if (!(dup = (char*)ft_malloc((buf - str) * sizeof(char))))
		return (NULL);
	buf = dup;
	while (*str)
		*buf++ = *str++;
	*buf = '\0';
	return (dup);
}
