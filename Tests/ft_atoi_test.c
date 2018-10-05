/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi_test.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 15:40:11 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/05 17:25:40 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>
#include "../Sources/ft_atoi.c"

void	test(const char *msg, const char *str)
{
	int ret_libc;
	int ret_libft;

	ret_libc = atoi(str);
	ret_libft = ft_atoi(str);
	printf
	(
		"| %-50s | %d | %-12d | %-12d |\n", 
		msg,
		ret_libc == ret_libft,
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
	test("Testing 42", "42");
	test("Testing .42", ".42");
	test("Testing 42a", "42a");
	test("Testing 42.5", "42.5");
	test("Testing +42", "+42");
	test("Testing -42", "-42");
	test("Testing --42", "--42");
	test("Testing +-42", "+-42");
	test("Testing ++42", "++42");
	test("Testing -+42", "-+42");
	test("Testing \\t\\v\\n\\r\\f42", "\t\v\n\r\f42");
	test("Testing ' 42'", " 42");
	test("Testing -2147483648", "-2147483648");
	test("Testing 2147483647", "2147483647");
	//test("NULL string", NULL);
	test("Empty string", "");
	printf("%s\n", spn);

	return (0);
}