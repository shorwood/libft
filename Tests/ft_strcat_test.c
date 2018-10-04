/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcat_test.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 15:40:11 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/04 14:43:19 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Sources/ft_strcat.c"

void	test(const char *msg, char *dst, const char *src)
{
	char *ret_libc;
	char *ret_libft;

	ret_libc = strndup(dst, 10);
	ret_libft = strndup(dst, 10);
	strcat(ret_libc, src);
	ft_strcat(ret_libft, src);
	printf
	(
		"| %-50s | %d | %-12s | %-12s |\n", 
		msg,
		!strcmp(ret_libc, ret_libft),
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
	test("Valid strings", "lorem", "ipsum");
	test("Empty source string", "lorem", "");
	test("Empty destination string", "\0xxxx", "ipsum");
	printf("%s\n", spn);

	return (0);
}
