/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlen_test.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 15:40:11 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/03 18:49:11 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Sources/ft_strlen.c"



void	test(const char *msg, const char *str)
{
	size_t ret_libc;
	size_t ret_libft;

	ret_libc = strlen(str);
	ret_libft = ft_strlen(str);
	printf
	(
		"| %-50s | %d | %-12d | %-12d |\n", 
		msg,
		ret_libc == ret_libft,
		(int)ret_libc,
		(int)ret_libft
	);
}

int		main(void)
{
	char *spn;
	
	spn = (char*)malloc(88 * sizeof(char*));
	memset(spn, '-', 88);

	printf("%s\n", spn);
	test("Empty strings", "");
	test("Valid strings", "word");
	printf("%s\n", spn);

	return (0);
}