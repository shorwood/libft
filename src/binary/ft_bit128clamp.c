/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_bit128clamp.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/10 01:17:56 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/10 02:05:58 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

__uint128_t	ft_bit128clamp(__uint128_t val, unsigned int i, unsigned int n)
{
	return (val
		& ((__uint128_t)~0 >> (__CHAR_BIT__ * sizeof(val) - i))
		& ((__uint128_t)~0 << n));
}
