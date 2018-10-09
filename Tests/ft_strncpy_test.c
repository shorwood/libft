/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncpy_test.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 15:40:11 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/09 11:12:43 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Sources/ft_strncpy.c"

void	test(const char *msg, const char *str, size_t n)
{
	char *ret_libc = (char*)calloc(65535, sizeof(char*));
	char *ret_libft = (char*)calloc(65535, sizeof(char*));
	memset(ret_libc, '.', 12);
	memset(ret_libft, '.', 12);
	ret_libft = ft_strncpy(ret_libft, str, n);
	ret_libc = strncpy(ret_libc, str, n);
	printf
	(
		"| %-50s | %d | %-12s | %-12s |\n", 
		msg,
		!memcmp(ret_libc, ret_libft, 12),
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
	test("Valid string with valid range", "lorem", 5);
	test("Valid string with cropped range", "lorem", 2);
	test("Valid string with overflowing range", "lorem", 10);
	test("Valid string with zero range", "lorem", 0);
	test("Empty string with out of bound range", "", 5);
	printf("%s\n", spn);

	return (0);
}
