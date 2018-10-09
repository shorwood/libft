/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncmp_test.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 15:40:11 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/09 16:22:28 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Sources/ft_strncmp.c"

void	test(const char *msg, char *str, const char *cmp, size_t len)
{
	int ret_libc;
	int ret_libft;

	ret_libc = strncmp(str, cmp, len);
	ret_libft = ft_strncmp(str, cmp, len);
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
	test("Matching strings with correct range", "lorem", "lorem", 5);
	test("Matching strings with out of bound range", "lorem", "lorem", 6);
	test("Unmatching strings with cropped range", "lorem", "lorep", 4);
	test("Unmatching strings with range as zero", "lorem", "ispum", 0);
	test("Unmatching strings with non ASCII character", "lore∑", "lorem", 5);
	test("Unmatching strings with char. w/ value -128", "lorem\200", "lorem", 6);
	test("Empty string as both strings", "", "", 0);
	test("Empty string as the first string", "", "porem", 5);
	test("Empty string as the second string", "lorem", "", 5);
	printf("%s\n", spn);

	return (0);
}
