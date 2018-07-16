/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_recursive_factorial_test.c                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 14:53:28 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 08:00:02 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_recursive_factorial.c"

int		main(void)
{
	int		i;

	i = -1;
	while (i <= 32)
	{
		printf("%d: %d\n", i, ft_recursive_factorial(i));
		i++;
	}
	return (0);
}
