/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_recursive_power_test.c                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 14:53:28 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 22:52:14 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_recursive_power.c"

int		main(void)
{
	int		i;

	i = -1;
	while (i <= 32)
	{
		printf("%d: %d\n", i, ft_recursive_power(2, i));
		i++;
	}
	return (0);
}
