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
#include "../Sources/ft_memmove.c"

static 
void	test(const char *msg, void *dst, size_t offset, size_t n)
{
	void *ret_libc;
	void *ret_libft;

	ret_libc = malloc(n);
	ret_libft = malloc(n);
	memcpy(ret_libc, dst, n);
	memcpy(ret_libft, dst, n);
	memmove(ret_libc + offset, ret_libc, n);
	ft_memmove(ret_libft + offset, ret_libft, n);
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
	test("Matching strings with valid range", "Moutarde....", 4, 8);
	printf("%s\n", spn);

	return (0);
}
