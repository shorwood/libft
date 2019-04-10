/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_bit16clamp.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/10 01:17:56 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/10 02:05:12 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

uint16_t	ft_bit16clamp(uint16_t val, unsigned int i, unsigned int n)
{
	return (val
		& ((uint16_t)~0 >> (__CHAR_BIT__ * sizeof(val) - i))
		& ((uint16_t)~0 << n));
}
