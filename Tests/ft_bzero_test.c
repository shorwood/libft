/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_bzero_test.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 15:40:11 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/09 20:54:05 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../ft_bzero.c"

static 
void	test(const char *msg, size_t n)
{
	void *ret_libc = malloc(n);
	void *ret_libft = malloc(n);

	bzero(ret_libc, n);
	ft_bzero(ret_libft, n);
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
	test("Initialize an array of 0 'Zero' bytes", 0);
	test("Initialize an array of 16 'Zero' bytes", 16);
	test("Initialize an array of 256 'Zero' bytes", 256);
	printf("%s\n", spn);

	return (0);
}
