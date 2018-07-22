/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi_base.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 02:47:14 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/21 04:19:57 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"
#include <stdbool.h>

_INT	ft_atoi_base(_CCHR *str, _CHR base)
{
	int x;
	int s;
	int c;

	x = 0;
	s = 1;
	while (*str == '\t' || *str == '\v' || *str == '\n'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		s = -1;
		str++;
	}
	while (*str && (c = ft_ctoi(*str++)) > 0)
		x = x * base + c;
	return (x * s);
}
