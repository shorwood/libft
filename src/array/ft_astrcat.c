/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_astrcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/27 01:05:36 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/17 07:44:38 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_astrcat(const char **arr)
{
	size_t	len;
	char	*str;
	char	**buf;

	buf = (char**)arr;
	len = 0;
	while (*buf)
		len += ft_strlen(*buf++) + 1;
	str = ft_strnew(len);
	str[len] = '\0';
	buf = (char**)arr;
	len = 0;
	while (*buf)
	{
		ft_strcpy(str + len, *buf++);
		len += ft_strcspn(str + len, "\0") + 1;
		str[len - 1] = '\n';
	}
	return (str);
}
