/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat_test.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 15:40:11 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/09 11:08:52 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Sources/ft_strlcat.c"
#include "../Sources/ft_strlen.c"

void	test(const char *msg, char *dst, const char *src, size_t len)
{
	char *dst0;
	char *dst1;
	int ret_libc;
	int ret_libft;

	dst0 = strdup(dst);
	dst1 = strdup(dst);
	memset(dst0, '.', 12);
	memset(dst1, '.', 12);
	strcpy(dst0, dst);
	strcpy(dst1, dst);
	ret_libc = strlcat(dst0, src, len);
	ret_libft = ft_strlcat(dst1, src, len);
	printf
	(
		"| %-50s | %d | %-2d %-9s | %-2d %-9s |\n", 
		msg,
		!memcmp(dst0, dst1, 14) && ret_libc == ret_libft,
		ret_libc, dst0,
		ret_libft, dst1
	);
}

int		main(void)
{
	char *spn;
	
	spn = (char*)malloc(88 * sizeof(char*));
	memset(spn, '-', 88);

	printf("%s\n", spn);
	test("Valid string with out of bound range", 				"hi ", 		"there", 	12);
	test("Valid string with valid range", 						"hi ", 		"there", 	9);
	test("Valid string with cropped outer range", 				"hi ", 		"there", 	7);
	test("Valid string with cropped outer range", 				"hi ", 		"there", 	6);
	test("Valid string with cropped inner range", 				"hi ", 		"there", 	1);
	test("Valid string with zero range", 						"hi ", 		"there", 	0);
	test("Empty destination string with valid range", 			"", 		"there", 	6);
	test("Empty destination string with cropped range", 		"", 		"there", 	4);
	test("Empty destination string with out of bound range",	"", 		"there", 	7);
	test("Empty source string with valid range", 				"hi", 		"", 		0);
	printf("%s\n", spn);

	return (0);
}
