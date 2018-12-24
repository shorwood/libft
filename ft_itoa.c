/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/13 20:45:28 by exam         #+#   ##    ##    #+#       */
/*   Updated: 2018/12/21 04:14:28 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int x)
{
	char			*str;
	int				neg;
	int				len;
	unsigned int	nbr;

	neg = x < 0;
	len = neg ? 3U : 2U;
	nbr = neg ? -x : x;
	while (x /= 10)
		len++;
	if (!(str = (char*)malloc(len-- * sizeof(char))))
		return (str);
	if (neg)
		*str = '-';
	*(str + len--) = '\0';
	*(str + len--) = nbr % 10 + '0';
	while (nbr /= 10)
		*(str + len--) = nbr % 10 + '0';
	return (str);
}
