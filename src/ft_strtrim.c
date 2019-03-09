/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/12 09:25:35 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 23:01:14 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

static char	*helper_empty_string(void)
{
	char *str;

	str = (char*)malloc(sizeof(char));
	*str = '\0';
	return (str);
}

char		*ft_strtrim(char const *str)
{
	char	*trm;
	char	*buf;
	size_t	len;

	if (!str)
		return (char*)(str);
	while (*str == ' ' || *str == '\n' || *str == '\t')
		str++;
	if (!*str)
		return (helper_empty_string());
	buf = (char*)str;
	len = 0UL;
	while (*buf++)
		len++;
	buf--;
	while (*--buf == ' ' || *buf == '\n' || *buf == '\t')
		len--;
	if (!(trm = (char*)malloc(++len * sizeof(char))))
		return (trm);
	buf = trm;
	while (--len)
		*buf++ = *(char*)str++;
	*buf = '\0';
	return (trm);
}
