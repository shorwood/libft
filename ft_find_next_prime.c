/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_find_next_prime.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 17:29:01 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 23:29:07 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_is_prime(int x)
{
	int		i;

	if (x < 2)
		return (0);
	i = 2;
	while (i < x)
	{
		if (x % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int x)
{
	while (!ft_is_prime(x))
		x++;
	return (x);
}
