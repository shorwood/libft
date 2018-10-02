/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 18:51:25 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/02 22:51:11 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strstr(const char *__big, const char *__little)
{
	if (!*__little)
		return ((char*)__big);
	if (!*__big)
		return (NULL);
	if (*__big == *__little && ft_strstr(__big + 1, __little + 1) == __big + 1)
		return ((char*)__big);
	return (ft_strstr(__big + 1, __little));
}
