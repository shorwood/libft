/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrev_test.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 14:53:54 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/06 23:34:00 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strrev.c"

int		main(void)
{
	char string4[] = "abcd";
	char string8[] = "abcdefgh";
	printf("%s\n",string4);
	printf("%s\n",ft_strrev(string4));
	printf("%s\n",string8);
	printf("%s\n",ft_strrev(string8));
	return (0);
}
