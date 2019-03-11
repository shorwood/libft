/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/21 02:53:15 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/24 15:05:30 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdio.h>


static int fnd(void *data)
{
	return (ft_strlen((char*)data) > 9);
}


static void fnc(void *data, size_t i)
{
	printf("| %5lu | %16p | %48s|\n", i, data, (char*)data);
}

int	main(void)
{
	t_lst vegies;
	char *str;
	
	vegies = ft_lstnew(3, "Salade", "Tomate", "Oignons");
	ft_lstiteri(vegies, fnc);


	str = ft_lstjoin(vegies, " . ");

	printf("---\n%d\n", ft_lstfind(vegies, fnd));
	printf("%d\n---\n", ft_lststr(vegies, "Oignons"));

	ft_lstclr(vegies, 0);
	ft_putendl(str);
	free(str);


	return (0);
}
