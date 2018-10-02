/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_apply.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/17 07:42:45 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/17 21:30:09 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_apply(int *arr, int n, int (*fnc)(int))
{
	int *buf;

	if (!arr || !fnc)
		return ((int*)0);
	buf = arr;
	while (n--)
		*buf++ = fnc(*arr++);
	return (arr);
}
