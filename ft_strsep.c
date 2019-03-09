/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsep.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 18:51:25 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/24 17:33:47 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsep(char **str, const char *sep)
{
	char	*ret;
	char	*ptr;

	if (!str || !*str)
		return (NULL);
	ret = *str;
	while (*str)
	{
		ptr = (char*)sep;
		while (*ptr)
			if (**str == *ptr++)
			{
				**str = '\0';
				(*str)++;
				return (ret);
			}
		(*str)++;
	}
	*str = NULL;
	return (ret);
}