/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_calloc.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 13:12:52 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/30 01:15:49 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t cnt, size_t siz)
{
	void	*ptr;

	siz *= cnt;
	if (!(ptr = ft_malloc(siz)))
		return (NULL);
	ft_bzero(ptr, siz);
	return (ptr);
}
