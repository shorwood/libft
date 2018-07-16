/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat_test.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 18:52:40 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 20:29:50 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strncat.c"

int		main(void)
{
	char str[] = "I like \0xxxxxxx";
	char str2[] = "I like \0xxxxxxx";
	printf("strncat:\t%s\n", strncat(str, "trees", 3));
	printf("ft_strncat:\t%s\n", ft_strncat(str2, "trees", 3));
	char str3[] = "I like \0xxxxxxx";
	char str4[] = "I like \0xxxxxxx";
	printf("strncat:\t%s\n", strncat(str3, "trees", 5));
	printf("ft_strncat:\t%s\n", ft_strncat(str4, "trees", 5));
	char str5[] = "I like \0xxxxxxx";
	char str6[] = "I like \0xxxxxxx";
	printf("strncat:\t%s\n", strncat(str5, "trees", 0));
	printf("ft_strncat:\t%s\n", ft_strncat(str6, "trees", 0));
	return (0);
}
