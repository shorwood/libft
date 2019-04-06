/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtoupper.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/05 07:58:13 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/05 08:56:35 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtoupper(char *str)
{
	char *buf;

	buf = str;
	while (*buf)
	{
		*buf = ft_toupper(*buf);
		buf++;
	}
	return (str);
}
