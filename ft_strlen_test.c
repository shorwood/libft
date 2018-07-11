/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlen_test.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 14:53:49 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 00:30:40 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strlen.c"

int		main(void)
{
    char string0[] = "";
    char string4[] = "0123";
    char string8[] = "01234567";
    char string12[] = "012345678901";

    printf("%d\n", ft_strlen(string0));
    printf("%d\n", ft_strlen(string4));
    printf("%d\n", ft_strlen(string8));
    printf("%d\n", ft_strlen(string12));
	return (0);
}
