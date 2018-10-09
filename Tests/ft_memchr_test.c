/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr_test.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 22:16:39 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/07 17:27:14 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Sources/ft_memchr.c"

void	test(char *msg, const char *str, int c, size_t n)
{	
	char *ret_libc;
	char *ret_libft;

	ret_libc = memchr(str, c, n);
	ret_libft = ft_memchr(str, c, n);
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
	test("Matching string terminating char. w/ valid range", "lorem", '\0', 6);
	test("Matching character at the start", "lorem", 'l', 5);
	test("Matching character at the end w/ cropped range", "lorem", 'm', 4);
	test("Unatching character", "lorem", 'q', 10);
	test("Empty string with overflowing range", "", 'a', 10);
	printf("%s\n", spn);
	return (0);
}
