/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstclr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 17:41:54 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/10 04:48:15 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstclr(t_list **lst, int flg)
{
	t_list *nxt;

	if (!lst)
		return ;
	while (*lst)
	{
		nxt = (*lst)->next;
		if (flg & FT_LCLR_DATA)
			free((*lst)->data);
		if (flg & FT_LCLR_ITEM)
			free(*lst);
		*lst = nxt;
	}
	if (flg & FT_LCLR_LIST)
		free(lst);
}
