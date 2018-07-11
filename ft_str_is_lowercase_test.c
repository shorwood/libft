/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_str_is_lowercase_test.c                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 17:00:12 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 06:14:19 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_str_is_lowercase.c"

int		main(void)
{
	char str[] = "salutcommenttuvasmotsquarantedeuxcinquanteetun";
	char str2[] = "SALUTCOMMENTTUVASMOTSQUARANTEDEUXCINQUANTEETUN";\
	printf("%s: %d\n", str, ft_str_is_lowercase(str));
	printf("%s: %d\n", str2, ft_str_is_lowercase(str2));
	return (0);
}
