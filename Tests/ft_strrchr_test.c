/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr_test.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 22:16:39 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/07 11:11:45 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Sources/ft_strrchr.c"

void	test(char *msg, const char *str, int c)
{	
	char *ret_libc;
	char *ret_libft;

	ret_libc = strrchr(str, c);
	ret_libft = ft_strrchr(str, c);
	printf
	(
		"| %-50s | %d | %-12s | %-12p |\n", 
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
	test("Matching character at the start", "lorem lorem", 'l');
	test("Matching character at the middle", "lorem lorem", 'r');
	test("Matching character at the end", "lorem lorem", 'm');
	test("Unatching character", "lorem", 'q');
	test("Empty string", "", 'a');
	printf("%s\n", spn);
	return (0);
}
