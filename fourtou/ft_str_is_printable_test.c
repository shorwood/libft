/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_str_is_printable_test.c                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 17:00:12 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 06:35:42 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_str_is_printable.c"

int		main(void)
{
	char str[] = "\t4 2";
	char str2[] = "TAB 4 2";\
	printf("%s: %d\n", str, ft_str_is_printable(str));
	printf("%s: %d\n", str2, ft_str_is_printable(str2));
	return (0);
}
