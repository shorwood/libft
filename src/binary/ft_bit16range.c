/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_bit16range.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/10 01:17:56 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/10 02:05:14 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

uint16_t	ft_bit16range(uint16_t val, unsigned int i, unsigned int n)
{
	return (ft_bit16clamp(val, i, n) >> n);
}
