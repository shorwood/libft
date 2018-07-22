/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sqrt_test.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 07:34:24 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 22:31:06 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>
#include "ft_sqrt.c"

int		main(void)
{
	int		i;

	printf("-4: %d\n", ft_sqrt(-4));
	printf("-1: %d\n", ft_sqrt(-1));
	i = 0;
	while (i <= 32)
	{
		printf("%d: %d \n", i * i, ft_sqrt(i * i));
		i++;
	}
	return (0);
}
