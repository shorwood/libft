/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sqrtillu.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 07:34:21 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/05 13:58:47 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

unsigned long long	ft_sqrtillu(unsigned long long n)
{
	unsigned long long x;

	x = 2;
	while (x * x < n)
		x++;
	return (x);
}
