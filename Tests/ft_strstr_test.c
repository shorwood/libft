/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr_test.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 22:16:39 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/02 22:51:52 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Sources/ft_strstr.c"

void	test(char *msg, const char *big, const char *sml)
{	
	char *ret_libc;
	char *ret_libft;

	ret_libc = strstr(big, sml);
	ret_libft = ft_strstr(big, sml);

	printf
	(
		"%-50s | %d | %-12p | %-30p \n", 
		msg,
		ret_libc == ret_libft,
		ret_libc,
		ret_libft
	);
}

int		main(void)
{
	char *str0;
	char *str1;
	
	str0 = (char*)malloc(65535 * sizeof(char*));
	str1 = (char*)malloc(65535 * sizeof(char*));

	printf("----------------------------------------------------------------\n");
	test("Empty word as both word", "", "");
	test("Empty word as the big word", "", "word");
	test("Empty word as the small word", "word", "");
	test("Matching words", "word", "word");
	test("Unmatching words", "word", "world");
	printf("----------------------------------------------------------------\n");

	free(str0);
	free(str1);
	return (0);
}
