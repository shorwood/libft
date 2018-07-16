/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcpy_test.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 18:52:40 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 07:49:02 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strcpy.c"

int		main(void)
{
	char str[] = "xxxxxxxxx";
	char str2[] = "xxxxxxxxx";
	printf("strcpy:\t\t%s\n", strcpy(str, "String"));
	printf("ft_strcpy:\t%s\n", ft_strcpy(str2, "String"));
	return (0);
}
