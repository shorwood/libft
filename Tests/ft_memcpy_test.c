/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove_test.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 15:40:11 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/07 12:48:19 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Sources/ft_memcpy.c"

static 
void	test_overlap(const char *msg, void *dst, size_t offset, size_t n)
{
	void *ret_libc;
	void *ret_libft;

	ret_libc = malloc(n);
	ret_libft = malloc(n);
	memcpy(ret_libc, dst, n);
	memcpy(ret_libft, dst, n);
	memcpy(ret_libc + offset, ret_libc, n);
	ft_memcpy(ret_libft + offset, ret_libft, n);
	printf
	(
		"| %-50s | %d | %-12s | %-12s |\n", 
		msg,
		!strcmp(ret_libc, ret_libft),
		ret_libc,
		ret_libft
	);
}

static 
void	test(const char *msg, void *dst, const void *src, size_t n)
{
	void *ret_libc = strdup(dst);
	void *ret_libft = strdup(dst);
	memcpy(ret_libc, src, n);
	ft_memcpy(ret_libft, src, n);
	printf
	(
		"| %-50s | %d | %-12s | %-12s |\n", 
		msg,
		!memcmp(ret_libc, ret_libft, n),
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
	test("Copying into a string with valid range", "......ipsum", "lorem", 5);
	test("Copying into a string with cropped range", "......ipsum", "lorem", 1);
	test("Copying into a string with no range", "......ipsum", "lorem", 0);
	test("Copying into an empty string", "", "lorem", 5);
	test("Copying from an empty string w/ overflowing range", "......ipsum", "", 1);
	test("Copying from an empty string with valid range", "......ipsum", "", 0);
	test("Copying into a string with overflowing range", "......ipsum", "lorem", 6);
	test_overlap("Copying memory unto overlapping position", ".....lorem", -5, 5);
	test_overlap("Copying memory onto overlapping position", "lorem.....", 1, 5);
	printf("%s\n", spn);

	return (0);
}
