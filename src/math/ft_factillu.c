/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_factillu.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/26 22:29:58 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/17 07:47:42 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

unsigned long long	ft_factillu(unsigned long long n)
{
	unsigned long long ret;
	unsigned long long i;

	i = n;
	ret = 1ULL;
	while (i > 1ULL)
		ret *= i--;
	return (ret);
}
