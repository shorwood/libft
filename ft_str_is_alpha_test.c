/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_str_is_alpha_test.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 17:00:12 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 06:14:57 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_str_is_alpha.c"

int		main(void)
{
	char str[] = "salutcommenttuvasmotsquarantedeuxcinquanteetun";
	char str2[] = "SALUTCOMMENTTUVASMOTSQUARANTEDEUXCINQUANTEETUN";
	char str3[] = "SALUTCOMMENTTUVASMOT_QUARANTEDEUXCINQUANTEETUN";
	printf("%s: %d\n", str, ft_str_is_alpha(str));
	printf("%s: %d\n", str2, ft_str_is_alpha(str2));
	printf("%s: %d\n", str3, ft_str_is_alpha(str3));
	return (0);
}
