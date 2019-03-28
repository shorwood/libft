/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strperm.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/26 22:27:00 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/27 01:19:21 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"


char		**ft_strperm(const char *str)
{
	char 	**arr;
	char	*buf;
	size_t	len;
	size_t	n;
	size_t	x;
	size_t	i;

	len = ft_strlen(str);
	n = ft_factorial(len);
	arr = (char**)malloc((n + 1) * sizeof(char*));
	arr[n] = NULL;
	
	if (len == 1)
	{
		arr[0] = ft_strdup(str);
		return (arr);
	}

	if (len == 1)
	{
		arr[0] = ft_strdup(str);
		return (arr);
	}

	i = 0;
	x = 0;

	while (x < len)
	{
		buf = ft_strdup(str);
		char c = buf[x];
		ft_memcpy(&buf[x], &buf[x + 1], len - x);
		char **perm = ft_strperm(buf);
		char **tmp = perm;

		while (*tmp)
		{
			arr[i++] = ft_strjoin((char[2]){c, '\0'}, *tmp);
			free(*tmp++);
		}
		free(perm);
		x++;
	}

	return arr;
}