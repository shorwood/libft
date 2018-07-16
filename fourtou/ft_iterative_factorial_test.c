/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_factorial_test.c                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 14:53:28 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 07:37:15 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_iterative_factorial.c"

int		main(void)
{
	int		i;

	i = -1;
	while (i <= 32)
	{
		printf("%d: %d\n", i, ft_iterative_factorial(i));
		i++;
	}
	return (0);
}
