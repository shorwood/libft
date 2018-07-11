/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_factorial.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 06:26:55 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/08 02:24:58 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_iterative_factorial(int n)
{
	int		i;

	if (n < 0)
		return (0);
	if (n < 2)
		return (1);
	i = n - 1;
	while (i)
	{
		n *= i;
		i--;
	}
	return (n);
}
