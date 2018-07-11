/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlen_test.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 14:53:49 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/11 18:18:30 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strlen.c"

int		main(void)
{
    char str0[] = "";
    char str1[] = "0";
    char str2[] = "0123";
    char str3[] = "01234567";

    printf("%s:\t\t\t%d\t%lu\n", str0, ft_strlen(str0), strlen(str0));
    printf("%s:\t\t\t%d\t%lu\n", str1, ft_strlen(str1), strlen(str1));
    printf("%s:\t\t%d\t%lu\n", str2, ft_strlen(str2), strlen(str2));
    printf("%s:\t%d\t%lu\n", str3, ft_strlen(str3), strlen(str3));
	return (0);
}
