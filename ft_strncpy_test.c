/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncpy_test.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 18:52:40 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 07:45:59 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strncpy.c"

int		main(void)
{
	char str[] = "xxxxxxxxx";
	char str2[] = "xxxxxxxxx";
	printf("strncpy:\t%s\n", strncpy(str, "String", 3));
	printf("ft_strncpy:\t%s\n", ft_strncpy(str2, "String", 3));
	return (0);
}
