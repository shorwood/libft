/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 14:53:46 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 06:08:34 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int x)
{
	if (x == -2147483648)
	{
		ft_putnbr(-214748367);
		ft_putnbr(8);
	}
	else if (x < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-x);
	}
	else if (x > 9)
	{
		ft_putnbr(x / 10);
		ft_putnbr(x % 10);
	}
	else
	{
		x += '0';
		write(1, &x, 1);
	}
}
