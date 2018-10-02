/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strread.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/19 22:53:13 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/25 23:36:17 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft.h"

char	*ft_strread(int fld, int bfs)
{
	char	*cur;
	char	*str;
	char	*buf;

	if (!(cur = (char*)malloc(bfs * sizeof(char))))
		return (cur);
	str = NULL;
	while ((bfs = read(fld, cur, bfs)) > 0)
	{
		buf = str;
		str = ft_s_strncat(buf, cur, bfs);
		free(buf);
	}
	free(cur);
	return (str);
}
