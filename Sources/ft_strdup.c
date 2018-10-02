/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/05 15:12:37 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/02 22:05:25 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *str)
{
	char *buf;
	char *dup;

	buf = str;
	while (*str)
		str++;
	dup = malloc((str - buf + 1) * (sizeof(char)));
	str = buf;
	buf = dup;
	while (*str)
	{
		*buf = *str;
		str++;
		buf++;
	}
	*buf = '\0';
	return (dup);
}
