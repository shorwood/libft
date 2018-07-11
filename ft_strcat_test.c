/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcat_test.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 18:52:40 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 18:38:12 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strcat.c"

int		main(void)
{
	char str[] = "I like \0xxxxxxxxxx";
	char str2[] = "I like \0xxxxxxxxxx";
	printf("strcat:\t\t%s\n", strcat(str, "trees"));
	printf("ft_strcat:\t%s\n", ft_strcat(str2, "trees"));
	return (0);
}
