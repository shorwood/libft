/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_find_next_prime_test.c                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 17:29:04 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/12 04:20:26 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_is_prime.c"
#include "ft_find_next_prime.c"

int		main(void)
{
	int	i;

	i = -1;
	while (i < 127)
	{
		i = ft_find_next_prime(i + 1);
		printf("%d\n", i);
	}
	return (0);
}
