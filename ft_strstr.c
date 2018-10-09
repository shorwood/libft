/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 18:51:25 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/07 12:20:14 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strstr(const char *big, const char *ltl)
{
	if (!*ltl)
		return ((char*)big);
	if (!*big)
		return (NULL);
	if (*big == *ltl && ft_strstr(big + 1, ltl + 1) == big + 1)
		return ((char*)big);
	return (ft_strstr(big + 1, ltl));
}
