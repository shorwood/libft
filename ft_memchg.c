/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchg.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/11 14:55:03 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/11 16:06:32 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchg(const void **mem, const void *chg)
{
	void *buf;

	if (!mem)
		return (NULL);
	buf = (void*)*mem;
	*mem = chg;
	free(buf);
	return (void*)(*mem);
}