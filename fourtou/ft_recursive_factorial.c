/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_recursive_factorial.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 06:06:16 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/08 02:25:05 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_recursive_factorial(int n)
{
	if (n < 0)
		return (0);
	if (n < 2)
		return (1);
	return (n * ft_recursive_factorial(n - 1));
}
