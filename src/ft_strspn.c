/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strspn.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 22:08:58 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/08 16:37:09 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strspn(const char *str, const char *spn)
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
			if (*buf++ != *str)
				return (len);
		len++;
		str++;
	}
	return (len);
}
