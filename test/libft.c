/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/21 02:53:15 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/14 01:02:11 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../src/ft_lstsplice.c"
#include "../src/ft_lstclr.c"
#include "../src/ft_lstjoin.c"
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
	
	t_lst vegies = ft_lstnew(7,
		"Salade",
		"OMAEWAMU",
		"SHINDAERU",
		"Tomate",
		"Oignons",
		"Cerise",
		"Poulet");
	ft_lstiteri(vegies, fnc);
	ft_putendl("--");
	t_lst vegies2 = ft_lstsplice(vegies, 4, 1);
	ft_lstiteri(vegies, fnc);
	ft_putendl("--");
	ft_lstiteri(vegies2, fnc);



	printf("---\n%d\n", ft_lstfind(vegies, fnd));
	printf("%d\n---\n", ft_lststr(vegies, "Oignons"));

	ft_lstclr(vegies, FT_LCLR_ITEM | FT_LCLR_LIST);
	ft_lstclr(vegies2, FT_LCLR_ITEM | FT_LCLR_LIST);

	return (0);
}
