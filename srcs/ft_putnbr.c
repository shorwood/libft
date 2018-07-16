/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 14:53:46 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/16 12:20:28 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/ft_putchar.h"

void	ft_putnbr(int x)
{
	if (x == -2147483648)
	{
		ft_putnbr(-214748364);
		ft_putchar('8');
	}
	else if (x < 0)
	{
		ft_putchar('-');
		ft_putnbr(-x);
	}
	else if (x > 9)
	{
		ft_putnbr(x / 10);
		ft_putnbr(x % 10);
	}
	else
		ft_putchar(x + '0');
}
