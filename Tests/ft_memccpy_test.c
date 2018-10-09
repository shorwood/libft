/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy_test.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 15:40:11 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/09 09:57:26 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Sources/ft_memccpy.c"

static 
void	test_overlap(const char *msg, void *dst, int c, size_t offset, size_t n)
{
	void *ret_libc = strdup(dst);
	void *ret_libft = strdup(dst);
	memccpy(ret_libc + offset, ret_libc, c, n);
	ft_memccpy(ret_libft + offset, ret_libft, c, n);
	printf
	(
		"| %-50s | %d | %-12s | %-12s |\n", 
		msg,
		!(ret_libc || ret_libft) || !memcmp(ret_libc, ret_libft, n + 1),
		ret_libc,
		ret_libft
	);
}

static 
void	test(const char *msg, void *dst, const void *src, int c, size_t n)
{

	void *ret_libc = strdup(dst);
	void *ret_libft = strdup(dst);
	void *ret_libc2;
	void *ret_libft2;
	ret_libc2 = memccpy(ret_libc, src, c, n);
	ret_libft2 = ft_memccpy(ret_libft, src, c, n);
	printf
	(
		"| %-50s | %d | %-12s | %-12s |\n", 
		msg,
		!(ret_libc2 || ret_libft2) ||
		(!memcmp(ret_libc, ret_libft, n) &&
		!memcmp(ret_libc2, ret_libft2, n)),
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
	test("Copying into a string with valid range and ", "......ipsum", "lorem", 'm', 5);
	test("Copying into a string with cropped range", "......ipsum", "lorem", 'i', 1);
	test("Copying into a string with no range", "......ipsum", "lorem", 'm', 0);
	test("Copying into an empty string", "", "lorem", 'm', 5);
	test("Copying from an empty string w/ overflowing range", "......ipsum", "", 'm', 1);
	test("Copying from an empty string with valid range", "......ipsum", "", 'm', 0);
	test("Copying into a string with overflowing range", "......ipsum", "lorem", 'm', 6);
	test_overlap("Copying memory unto overlapping position", ".....lorem", 'm', -5, 5);
	printf("%s\n", spn);

	return (0);
}
