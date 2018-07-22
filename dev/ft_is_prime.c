/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_is_prime.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 07:34:21 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/12 04:18:24 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_is_prime(int x)
{
	int		i;

	if (x < 2)
		return (0);
	if (x == 3)
		return (1);
	i = 2;
	while (i < x / 2)
	{
		if (x % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
