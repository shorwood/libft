/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_find_next_prime.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 17:29:01 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/12 04:19:59 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_is_prime(int x);

int		ft_find_next_prime(int x)
{
	if (x < 2)
		return (2);
	if (!(x % 2))
		x++;
	while (!ft_is_prime(x))
		x += 2;
	return (x);
}