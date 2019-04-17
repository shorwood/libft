/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strprm.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/26 22:27:00 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/28 02:28:52 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	**ft_strprm3(const char *str)
{
	char **arr;

	arr = (char**)malloc(7 * sizeof(char*));
	arr[0] = ft_strdup(str);
	arr[1] = ft_strnew(3);
	arr[2] = ft_strnew(3);
	arr[3] = ft_strnew(3);
	arr[4] = ft_strnew(3);
	arr[5] = ft_strnew(3);
	arr[1][0] = arr[0][0];
	arr[1][1] = arr[0][2];
	arr[1][2] = arr[0][1];
	arr[2][0] = arr[0][1];
	arr[2][1] = arr[0][0];
	arr[2][2] = arr[0][2];
	arr[3][0] = arr[0][1];
	arr[3][1] = arr[0][2];
	arr[3][2] = arr[0][0];
	arr[4][0] = arr[0][2];
	arr[4][1] = arr[0][0];
	arr[4][2] = arr[0][1];
	arr[5][0] = arr[0][2];
	arr[5][1] = arr[0][1];
	arr[5][2] = arr[0][0];
	arr[6] = NULL;
	return (arr);
}

/*
** *****************************************************************************
*/

static char	**ft_strprm2(const char *str)
{
	char **arr;

	arr = (char**)malloc(3 * sizeof(char*));
	arr[0] = ft_strdup(str);
	arr[1] = ft_strnew(2);
	arr[1][0] = arr[1][1];
	arr[1][1] = arr[0][0];
	arr[2] = NULL;
	return (arr);
}

/*
** *****************************************************************************
*/

static char	**ft_strprm1(const char *str)
{
	char **arr;

	arr = (char**)malloc(2 * sizeof(char*));
	arr[0] = ft_strdup(str);
	arr[1] = NULL;
	return (arr);
}

/*
** *****************************************************************************
*/

char		**ft_strprm(const char *str)
{
	char 	**arr;
	char	*buf;
	size_t	len;
	size_t	off;
	size_t	i;
	char	c;
	char	**perm;
	char	**tmp;

	if ((len = ft_strlen(str)) == 1)
		return (ft_strprm1(str));
	if (len == 2)
		return (ft_strprm2(str));
	if (len == 3)
		return (ft_strprm3(str));
	arr = (char**)malloc((ft_factillu(len) + 1) * sizeof(char*));
	i = 0;
	off = 0;
	while (off < len)
	{
		buf = ft_strdup(str);
		c = buf[off];
		ft_memcpy(&buf[off], &buf[off + 1], len - off);
		perm = ft_strprm(buf);
		tmp = perm;
		while (*tmp)
		{
			arr[i++] = ft_strjoin((char[2]){c, '\0'}, *tmp);
			free(*tmp++);
		}
		free(perm);
		off++;
	}
	arr[i] = NULL;
	return arr;
}