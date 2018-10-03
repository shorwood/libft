/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr_test.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 22:16:39 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/03 18:49:22 by shorwood    ###    #+. /#+    ###.fr     */
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
	test("Matching strings", "word", "word");
	test("Unmatching strings in the middle", "word", "world");
	test("Unmatching strings at the end", "word", "words");
	test("Unmatching strings at the start", "jord", "word");
	test("Empty strings as both word", "", "");
	test("Empty strings as the big word", "", "word");
	test("Empty strings as the little word", "word", "");
	printf("%s\n", spn);
	return (0);
}
