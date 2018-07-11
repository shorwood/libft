/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr_test.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 18:52:40 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 23:46:40 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strstr.c"

int		main(void)
{
	char str[] = "Is this real life ?";
	printf("strstr:\t\t%s\n", strstr(str, "life"));
	printf("ft_strstr:\t%s\n", ft_strstr(str, "life"));
	printf("strstr:\t\t%d\n", (int)strstr(str, "foo"));
	printf("ft_strstr:\t%d\n", (int)ft_strstr(str, "foo"));
	char str2[] = "fo";
	printf("strstr:\t\t%d\n", (int)strstr(str2, "fooooo"));
	printf("ft_strstr:\t%d\n", (int)ft_strstr(str2, "fooooo"));
	return (0);
}
