/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 18:51:25 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/07 12:20:09 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *ltl, size_t len)
{
	if (!*ltl)
		return ((char*)big);
	if (!*big)
		return (NULL);
	if (*big == *ltl && len && ft_strnstr(big + 1, ltl + 1, len - 1) == big + 1)
		return ((char*)big);
	return (ft_strnstr(++big, ltl, --len));
}
