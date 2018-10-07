/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr_test.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 22:16:39 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/07 10:10:03 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Sources/ft_strstr.c"

void	test(char *msg, const char *big, const char *sml)
{	
	char *ret_libc;
	char *ret_libft;

	ret_libc = strstr(big, sml);
	ret_libft = ft_strstr(big, sml);
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
	test("Matching strings", "lorem", "lorem");
	test("Matching strings at the start", "lorem", "lo");
	test("Matching strings at the middle", "lorem", "re");
	test("Matching strings at the end", "lorem", "em");
	test("Unmatching strings at the start", "lorem", "porem");
	test("Unmatching strings in the middle", "lorem", "lopem");
	test("Unmatching strings at the end", "lorem", "lorep");
	test("Empty strings as both word", "", "");
	test("Empty strings as the big word", "", "lorem");
	test("Empty strings as the little word", "lorem", "");
	printf("%s\n", spn);
	return (0);
}
