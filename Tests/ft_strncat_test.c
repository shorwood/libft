/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat_test.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 15:40:11 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/09 11:31:40 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Sources/ft_strncat.c"

void	test(const char *msg, char *dst, const char *src, size_t len)
{
	char *ret_libc = strcpy(strdup("............"), dst);
	char *ret_libft = strcpy(strdup("............"), dst);
	
	strncat(ret_libc, src, len);
	ft_strncat(ret_libft, src, len);
	printf
	(
		"| %-50s | %d | %-12s | %-12s |\n", 
		msg,
		!memcmp(ret_libc, ret_libft, 12),
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
	test("Valid string with valid range", 						"lorem", 	"ispum", 	6);
	test("Valid string with cropped range", 					"lorem", 	"ispum", 	3);
	test("Valid string with overflowing range", 				"lorem", 	"ispum", 	10);
	test("Valid string with zero range", 						"lorem", 	"ispum", 	0);
	test("Empty destination string with valid range", 			"", 		"ispum", 	5);
	test("Empty destination string with cropped range", 		"", 		"ispum", 	3);
	test("Empty destination string with out of bound range",	"", 		"ispum", 	6);
	test("Empty source string with valid range", 				"lorem", 	"", 		0);
	printf("%s\n", spn);

	return (0);
}
