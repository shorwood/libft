/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_isascii_test.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 15:40:11 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/05 16:56:43 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "../Sources/ft_isascii.c"

void	test(const char *msg)
{
	int res = 1;
	int ret_libc = 0;
	int ret_libft = 0;
	int c = -2; while (c++ <= 0x80)
		if (isascii(c) != ft_isascii(c))
		{
			res = 0;
			ret_libc = isascii(c);
			ret_libft = ft_isascii(c);
		}
	printf("| %-50s | %d | %-12d | %-12d |\n", msg, res, ret_libc, ret_libft);
}

int		main(void)
{
	char *spn = (char*)calloc(89, sizeof(char*));
	memset(spn, '-', 88);
	printf("%s\n", spn);
	test("Testing all ASCII characters");
	printf("%s\n", spn);
	return (0);
}