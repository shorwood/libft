/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strupcase_test.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 17:00:12 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 18:23:47 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strupcase.c"

int		main(void)
{
	char str[] = "Ecrire une fonction qui met en majuscule chaque lettre de chaque mot";
	printf("%s\n", ft_strupcase(str));
	return (0);
}
