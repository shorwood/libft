/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncmp.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 22:08:58 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/07 12:20:03 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strncmp(char *str, const char *cmp, size_t len)
{
	if (!len)
		return (0);
	if (*str == *cmp)
		return (ft_strncmp(++str, ++cmp, --len));
	return (*str - *cmp);
}
