/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/13 20:45:28 by exam         #+#   ##    ##    #+#       */
/*   Updated: 2018/10/12 07:26:22 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int x)
{
	char			*str;
	int				len;
	int				neg;
	unsigned int	ux;

	neg = x < 0;
	len = neg ? 2 : 1;
	ux = neg ? -x : x;
	while (x /= 10)
		len++;
	if (!(str = (char*)malloc(len * sizeof(char))))
		return (str);
	if (neg)
		*str = '-';
	*(str + len--) = '\0';
	*(str + len--) = ux % 10 + '0';
	while (ux /= 10)
		*(str + len--) = ux % 10 + '0';
	return (str);
}
