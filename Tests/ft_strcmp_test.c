/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcmp_test.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 15:40:11 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/04 15:55:43 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Sources/ft_strcmp.c"

void	test(const char *msg, char *str, const char *cmp)
{
	int ret_libc;
	int ret_libft;

	ret_libc = strcmp(str, cmp);
	ret_libft = ft_strcmp(str, cmp);
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
	test("Matching strings", "lorem", "lorem");
	test("Unmatching at the end", "lorem", "lorep");
	test("Unmatching at the start", "lorem", "porem");
	test("Empty string as both strings", "", "");
	test("Empty string as the first string", "", "porem");
	test("Empty string as the second string", "lorem", "");
	printf("%s\n", spn);

	return (0);
}
