/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 13:12:52 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 20:16:47 by shorwood    ###    #+. /#+    ###.fr     */
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
	while (*str && *str != c)
		str++;
	while (*str && *str == c)
		str++;
	return (*str ? str : NULL);
}

char		**ft_strsplit(char const *str, char c)
{
	char	*buf;
	char	**arr;
	char	**wrd;
	size_t	len;

	if (!str)
		return (NULL);
	while (*str && *str == c)
		str++;
	len = *str ? 2UL : 1UL;
	buf = (char*)str;
	while (buf && (buf = helper_next(buf, c)))
		len++;
	if (!(arr = (char**)malloc(len * sizeof(char*))))
		return (arr);
	wrd = arr;
	buf = (char*)str;
	while (--len)
	{
		*wrd++ = helper_store(buf, c);
		buf = helper_next(buf, c);
	}
	*wrd = NULL;
	return (arr);
}
