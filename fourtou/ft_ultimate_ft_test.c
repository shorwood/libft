/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ultimate_ft_test.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 14:53:28 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/12 04:06:18 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_ultimate_ft.c"

int		main(void)
{
	int *********array;

	array = (int*********)malloc(100 * sizeof(int));
	ft_ultimate_ft(array);

	printf("%d", *********array);
	return (0);
}