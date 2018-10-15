/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 13:12:52 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 17:16:15 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

static char	*helper_store(const char *dup, char c)
{
	size_t	len;
	char	*buf;
	char	*str;

	len = 1UL;
	buf = (char*)dup;
	while (*buf && *buf++ != c)
		len++;
	if (!(str = (char*)malloc(len * sizeof(char))))
		return (str);
	buf = str;
	while (--len)
		*buf++ = *dup++;
	*buf = '\0';
	return (str);
}

static char	*helper_next(char *str, char c)
{
	while (*str && *str++ != c)
		;
	while (*str && *str++ == c)
		;
	return (*str ? (str - 1) : NULL);
}

char		**ft_strsplit(char const *str, char c)
{
	char	*buf;
	char	**arr;
	char	**cur;
	size_t	len;

	while (*str && *str == c)
		str++;
	if (!*str)
		return (NULL);
	len = 2UL;
	buf = (char*)str;
	while (buf && (buf = helper_next(buf, c)))
		len++;
	if (!(arr = (char**)malloc(len * sizeof(char*))))
		return (arr);
	cur = arr;
	buf = (char*)str;
	while (--len)
	{
		*cur++= helper_store(buf, c);
		buf = helper_next(buf, c);
	};
	*cur = NULL;
	return (arr);
}
