/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft.c                                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 02:49:42 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 18:16:09 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_s_strcat.c"
#include "ft_s_strncat.c"

int		main(void)
{
	char *str;

	str = malloc(5 * sizeof(char));
	*str = '\0';

	printf("%s\n", ft_s_strncat(NULL, "dgtgr\0dawdaw", 23));
	return (0);
}
