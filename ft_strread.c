/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strread.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/19 22:53:13 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 18:28:36 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft.h"

char	*ft_strread(int fld, size_t bfs)
{
	char	*buf;
	char	*str;

	if (!(buf = (char*)malloc(bfs * sizeof(char))))
		return (NULL);
	str = NULL;
	while ((bfs = read(fld, buf, bfs)) > 0)
		(str = ft_s_strncat(str, buf, bfs));
	free(buf);
	return (str);
}
