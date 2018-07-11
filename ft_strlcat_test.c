/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat_test.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 18:52:40 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/11 17:00:12 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strlcat.c"

int		main(void)
{
	char str[50] = "1234\0xx";
	char str2[50] = "1234\0xx";
	printf("strncat:\t%s: %d\n", str, (int)strlcat(str, ".6789", 7));
	printf("ft_strncat:\t%s: %d\n", str2, ft_strlcat(str2, ".6789", 7));
	char str3[50] = "1234\0xxxxxxxx";
	char str4[50] = "1234\0xxxxxxxx";
	printf("strncat:\t%s: %d\n", str3, (int)strlcat(str3, ".6789", 14));
	printf("ft_strncat:\t%s: %d\n", str4, ft_strlcat(str4, ".6789", 14));
	char str5[50] = "1234\0xxxxxxxx";
	char str6[50] = "1234\0xxxxxxxx";
	printf("strncat:\t%s: %d\n", str5, (int)strlcat(str5, ".6789", 1));
	printf("ft_strncat:\t%s: %d\n", str6, ft_strlcat(str6, ".6789", 1));
	return (0);
}
