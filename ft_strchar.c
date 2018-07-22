/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strchar.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 02:33:12 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 05:28:21 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchar(char *str, char *c)
{
	if (*str == *c && *c)
		return (str);
	if (*str != *c)
		return (strchar(str + 1, c) ? strchar(str + 1, c) : strchar(str, c + 1));
	return (NULL);
}
