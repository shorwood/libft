/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcmp_test.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 15:40:11 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/07 11:59:38 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Sources/ft_memcmp.c"

static 
void	test(const char *msg, char *str, const void *cmp, size_t n)
{
	int ret_libc;
	int ret_libft;

	ret_libc = memcmp(str, cmp, n);
	ret_libft = ft_memcmp(str, cmp, n);
	printf
	(
		"| %-50s | %d | %-12d | %-12d |\n", 
		msg,
		ret_libc == ret_libft,
		ret_libc,
		ret_libft
	);
}

int		main(void)
{
	char *spn;
	
	spn = (char*)malloc(88 * sizeof(char*));
	memset(spn, '-', 88);

	printf("%s\n", spn);
	test("Matching strings with valid range", "lorem", "lorem", 5);
	test("Unmatching at the end with valid range", "lorem", "lorep", 5);
	test("Unmatching at the end with cropped range", "lorem", "lorep", 4);
	test("Unmatching at the start", "lorem", "porem", 1);
	test("Empty string as both strings", "", "", 1);
	test("Empty string as the first string", "", "porem", 1);
	test("Empty string as the second string", "lorem", "", 1);
	printf("%s\n", spn);

	return (0);
}
