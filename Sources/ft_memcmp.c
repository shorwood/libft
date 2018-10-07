/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 22:08:58 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/07 12:00:50 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (!n)
		return (0);
	if (*(unsigned char*)s1 == *(unsigned char*)s2)
		return (ft_memcmp(++s1, ++s2, --n));
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}
