/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_bit128range.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/10 01:17:56 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/10 02:04:36 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

__uint128_t	ft_bit128range(__uint128_t val, unsigned int i, unsigned int n)
{
	return (ft_bit128clamp(val, i, n) >> n);
}
