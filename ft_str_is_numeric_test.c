/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_str_is_numeric_test.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 17:00:12 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 20:15:25 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_str_is_numeric.c"

int		main(void)
{
	char str[] = "a123456789";
	char str2[] = "0bcdefghij";
	printf("%s: %d\n", str, ft_str_is_numeric(str));
	printf("%s: %d\n", str2, ft_str_is_numeric(str2));
	printf("%s: %d\n", "", ft_str_is_numeric(""));
	return (0);
}
