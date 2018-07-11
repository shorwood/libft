/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb_test.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/04 21:17:47 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/05 19:41:00 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_print_comb.c"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
