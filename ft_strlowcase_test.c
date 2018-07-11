/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlowcase_test.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 17:00:12 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 18:30:46 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strlowcase.c"

int		main(void)
{
	char str[] = "ECRIRE une fonction qui met en minuscule chaque lettre de chaque mot";
	printf("%s\n", ft_strlowcase(str));
	return (0);
}
