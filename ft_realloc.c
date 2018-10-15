/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_realloc.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 13:12:52 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 17:25:49 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_realloc(void *ptr, size_t siz)
{
	uint8_t	*old;
	uint8_t	*buf;
	void	*new;

	if (!(new = malloc(siz)))
		return (new);
	old = (uint8_t*)ptr;
	buf = (uint8_t*)new;
	while (siz--)
		*buf = *old;
	free(ptr);
	return (new);
}
