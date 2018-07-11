/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcmp_test.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 18:52:40 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 05:02:17 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strcmp.c"

int		main(void)
{
	printf("strcmp:\t\t%d\n", (int)strcmp("oof", "oof"));
	printf("ft_strcmp:\t%d\n", (int)ft_strcmp("oof", "oof"));
	printf("strcmp:\t\t%d\n", (int)strcmp("oofff", "oof"));
	printf("ft_strcmp:\t%d\n", (int)ft_strcmp("oofff", "oof"));
	printf("strcmp:\t\t%d\n", (int)strcmp("oof", "oofff"));
	printf("ft_strcmp:\t%d\n", (int)ft_strcmp("oof", "oofff"));
	printf("strcmp:\t\t%d\n", (int)strcmp("9", "0"));
	printf("ft_strcmp:\t%d\n", (int)ft_strcmp("9", "0"));
	return (0);
}
