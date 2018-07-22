/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_clear.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 21:14:26 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 01:26:56 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft.h"

void	ft_list_clear(t_list **clr)
{
	t_list *buf;

	__FT_P(clr && *clr);
	while (*clr)
	{
		buf = *clr;
		*clr = (*clr)->next;
		free(buf->data);
		free(buf);
	}
	*clr = NULL;
}
