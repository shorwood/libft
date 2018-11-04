/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_bitwrite.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/04 03:44:19 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/04 05:36:01 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_bitwrite(uint8_t *ptr, int i, int val)
{
	if (val)
		ft_bitset(ptr, i);
	else
		ft_bitclear(ptr, i);
}
