/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcspn.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 22:08:58 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/08 16:36:49 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strcspn(const char *str, const char *spn)
{
	char	*buf;
	size_t	len;

	if (!str || !spn)
		return (0);
	len = 0;
	while (*str)
	{
		buf = (char*)spn;
		while (*buf)
			if (*buf++ == *str)
				return (len);
		len++;
		str++;
	}
	return (len);
}
