/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_factorial.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/26 22:29:58 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/26 22:34:57 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

unsigned long long	ft_factorial(unsigned int n)
{
	unsigned long long ret;
	int i;

	i = n;
	ret = 1;
	while (i > 1)
		ret *= i--;
	return ret;
}
