/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr_test.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 22:16:39 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/09 15:48:19 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Sources/ft_strnstr.c"

void	test(char *msg, const char *big, const char *ltl, size_t len)
{	
	char *ret_libc;
	char *ret_libft;

	ret_libc = strnstr(big, ltl, len);
	ret_libft = ft_strnstr(big, ltl, len);
	printf
	(
		"| %-50s | %d | %-12p | %-12p |\n", 
		msg,
		ret_libc == ret_libft,
		ret_libc,
		ret_libft
	);
}

int		main(void)
{
	char *spn;
	spn = (char*)malloc(89 * sizeof(char*));

	memset(spn, '-', 88);
	printf("%s\n", spn);
	test("Matching strings", "lorem", "lorem", 5);
	test("Matching strings at the start", "lorem", "lo", 5);
	test("Matching strings at the middle", "lorem", "re", 5);
	test("Matching strings at the end", "lorem", "em", 5);
	test("Matching strings at the end with cropped range", "lorem", "rem", 3);
	test("Matching strings at the end with zero range", "lorem", "rem", 0);
	test("Unmatching strings at the start", "lorem", "porem", 5);
	test("Unmatching strings in the middle", "lorem", "lopem", 5);
	test("Unmatching strings at the end", "lorem", "lorep", 5);
	test("Empty strings as both word", "", "", 0);
	test("Empty strings as the big word", "", "lorem", 0);
	test("Empty strings as the little word", "lorem", "", 5);
	printf("%s\n", spn);
	return (0);
}
