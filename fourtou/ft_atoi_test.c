/* ************************************************************************** */
/*                                                          LE\t/            */
/*                                                              /             */
/*   ft_atoi_test.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/04 21:17:47 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/09 20:56:47 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_atoi.c"

int		main(void)
{
	printf("0:\t\t\t %d\t\t%d\n", ft_atoi("0"), atoi("0"));
	printf("42:\t\t\t %d\t\t%d\n", ft_atoi("42"), atoi("42"));
	printf("+42:\t\t %d\t\t%d\n", ft_atoi("+42"), atoi("+42"));
	printf("-42:\t\t %d\t%d\n", ft_atoi("-42"), atoi("-42"));
	printf(" 42:\t\t %d\t\t%d\n", ft_atoi(" 42"), atoi(" 42"));
	printf("\\t42:\t\t %d\t\t%d\n", ft_atoi("\t42"), atoi("\t42"));
	printf("\\v42:\t\t %d\t\t%d\n", ft_atoi("\v42"), atoi("\v42"));
	printf("\\n42:\t\t %d\t\t%d\n", ft_atoi("\n42"), atoi("\n42"));
	printf("\\r42:\t\t %d\t\t%d\n", ft_atoi("\r42"), atoi("\r42"));
	printf("\\f42:\t\t %d\t\t%d\n", ft_atoi("\f42"), atoi("\f42"));
	printf("--42:\t\t %d\t\t%d\n", ft_atoi("--42"), atoi("--42"));
	printf("++42:\t\t %d\t\t%d\n", ft_atoi("++42"), atoi("++42"));
	printf("2147483647:\t %d\t\t%d\n", ft_atoi("2147483647"), atoi("2147483647"));
	printf("-2147483648: %d\t%d\n", ft_atoi("-2147483648"), atoi("-2147483648"));
	printf("21474 83647: %d\t%d\n", ft_atoi("21474 83647"), atoi("21474 83647"));
	printf("\\t\\v42:\t\t %d\t\t%d\n", ft_atoi("\t\v42"), atoi("\t\v42"));
	return (0);
}
