/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memset_test.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 15:40:11 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/07 13:40:42 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Sources/ft_memset.c"

static 
void	test(const char *msg, int c, size_t n)
{
	void *ret_libc = malloc(n);
	void *ret_libft = malloc(n);

	memset(ret_libc, c, n);
	ft_memset(ret_libft, c, n);
	printf
	(
		"| %-50s | %d | %-12d | %-12d |\n", 
		msg,
		!memcmp(ret_libc, ret_libft, n),
		*(uint8_t*)ret_libc,
		*(uint8_t*)ret_libft
	);
}

int		main(void)
{
	char *spn;
	
	spn = (char*)malloc(88 * sizeof(char*));
	memset(spn, '-', 88);

	printf("%s\n", spn);
	test("Initialize an array of 0 'A' bytes", 'A', 0);
	test("Initialize an array of 16 'A' bytes", 'A', 16);
	test("Initialize an array of 256 'A' bytes", 'A', 256);
	printf("%s\n", spn);

	return (0);
}
