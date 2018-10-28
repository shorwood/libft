/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoui.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 02:48:36 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 22:32:32 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_atoui(const char *str)
{
	unsigned int	ret;

	if (!str)
		return (0);
	ret = 0;
	while (ft_isspace(*str))
		str++;
	while (ft_isdigit(*str))
		ret = ret * 10 + *str++ - '0';
	return (ret);
}
