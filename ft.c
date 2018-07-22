/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft.c                                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 02:49:42 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 17:14:32 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strtrl.c"
#include "ft_strsep.c"
#include "ft_strsqr.c"

int		main(void)
{
	printf("%s", ft_strsqr("/-\\| |\\-/", 10, 10));
	printf("%s", ft_strsqr("/-\\| |\\-/", 0, 10));
	printf("%s", ft_strsqr("/-\\| |\\-/", 10, 0));
	printf("%s", ft_strsqr("/-\\| |\\-/", 10, 1));
	return (0);
}
