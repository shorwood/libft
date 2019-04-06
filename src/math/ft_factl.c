/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_factl.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/26 22:29:58 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/05 10:50:21 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

long double	ft_factl(long double n)
{
	long double ret;
	long double i;

	i = n;
	ret = 1.0L;
	while (i > 1.0L)
		ret *= i--;
	return (ret);
}
