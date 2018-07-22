/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft.c                                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 02:49:42 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 16:10:15 by shorwood    ###    #+. /#+    ###.fr     */
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
	printf("%s", ft_strsqr("/-\\| |\\-/", 3, 1));
	return (0);
}
