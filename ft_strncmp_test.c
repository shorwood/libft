/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncmp_test.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 18:52:40 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 05:01:15 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strncmp.c"

int		main(void)
{
	printf("strncmp:\t\t%d\n", (int)strncmp("oof", "ooh", 2));
	printf("ft_strncmp:\t\t%d\n", (int)ft_strncmp("oof", "ooh", 2));
	printf("strncmp:\t\t%d\n", (int)strncmp("oof", "ooh", 3));
	printf("ft_strncmp:\t\t%d\n", (int)ft_strncmp("oof", "ooh", 3));
	printf("strncmp:\t\t%d\n", (int)strncmp("oof", "oo", 3));
	printf("ft_strncmp:\t\t%d\n", (int)ft_strncmp("oof", "oo", 3));
	printf("strncmp:\t\t%d\n", (int)strncmp("oo", "ooh", 3));
	printf("ft_strncmp:\t\t%d\n", (int)ft_strncmp("oo", "ooh", 3));
	return (0);
}
