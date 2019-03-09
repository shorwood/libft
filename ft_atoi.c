/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 02:48:36 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/24 12:41:27 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	ret;
	int	neg;

	if (!str)
		return (0);
	ret = 0;
	neg = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
		neg = *str++ == '-';
	while (ft_isdigit(*str))
		ret = ret * 10 + *str++ - '0';
	return (neg ? -ret : ret);
}
