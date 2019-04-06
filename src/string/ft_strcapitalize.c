/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcapitalize.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/05 07:58:13 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/05 09:20:43 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strcapitalize(char *str)
{
	char *buf;

	if (!str)
		return (NULL);
	buf = str;
	while (*buf)
	{
		while (*buf && !ft_isalpha(*buf))
			buf++;
		*buf = ft_toupper(*buf);
		while (*buf && ft_isalpha(*buf))
			buf++;
	}
	return (str);
}
