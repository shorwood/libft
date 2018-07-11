/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_recursive_power.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/05 13:16:13 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 07:21:27 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_recursive_power(int x, int n)
{
	if (n < 0)
		return (0);
	if (n < 1)
		return (1);
	return (x * ft_recursive_power(x, n - 1));
}
