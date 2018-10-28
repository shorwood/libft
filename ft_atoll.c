/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoll.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 02:48:36 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 19:03:11 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

long long	ft_atoll(const char *str)
{
	long long	ret;
	bool_t		neg;

	if (!str)
		return (0);
	neg = 0;
	ret = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
		neg = *str++ == '-';
	while (ft_isdigit(*str))
		ret = ret * 10 + *str++ - '0';
	return (neg ? -ret : ret);
}
