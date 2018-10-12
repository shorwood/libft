/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_isprint_test.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 15:40:11 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 17:00:24 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "../ft_isprint.c"

void	test(const char *msg)
{
	int res = 1;
	int ret_libc = 0;
	int ret_libft = 0;
	int c = -2; while (c++ <= 0x80)
		if (isprint(c) != ft_isprint(c))
		{
			res = 0;
			ret_libc = isprint(c);
			ret_libft = ft_isprint(c);
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