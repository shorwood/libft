/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnc.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 02:33:12 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/24 04:31:02 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnc(char *str, char c, unsigned int n)
{
	while (n--)
		if (*str++ == c)
			return (str);
	return (NULL);
}
