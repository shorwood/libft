/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcpy_test.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 15:40:11 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/03 01:11:06 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Sources/ft_strcpy.c"

void	test(const char *msg, const char *str)
{
	char *ret_libc;
	char *ret_libft;
	ret_libc = (char*)malloc(65535 * sizeof(char*));
	ret_libft = (char*)malloc(65535 * sizeof(char*));

	strcpy(ret_libc, str);
	ft_strcpy(ret_libft, str);

	printf
	(
		"| %-50s | %d | %-12s | %-12s |\n", 
		msg,
		!strcmp(ret_libc, ret_libft),
		ret_libc,
		ret_libft
	);

	free(ret_libc);
	free(ret_libft);
}

int		main(void)
{
	char *spn;
	
	spn = (char*)malloc(88 * sizeof(char*));
	memset(spn, '-', 88);

	printf("%s\n", spn);
	test("Valid strings", "word");
	test("Empty strings", "");
	printf("%s\n", spn);

	return (0);
}
