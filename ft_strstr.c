/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 18:51:25 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 17:17:47 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strstr(char *str, char *fnd)
{
	if (!str || !fnd)
		return (NULL);
	if (!*fnd)
		return (str);
	if (!*str)
		return (NULL);
	if (*str == *fnd && ft_strstr(str + 1, fnd + 1) == str + 1)
		return (str);
	return (ft_strstr(str + 1, fnd));
}
