/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstdel.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 17:41:54 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/30 02:46:55 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **lst, void (*fnc)(void*, size_t))
{
	t_list *buf;

	if (!lst || !fnc)
		return ;
	while (*lst)
	{
		buf = (*lst)->next;
		fnc((*lst)->content, (*lst)->content_size);
		ft_free(*lst);
		*lst = buf;
	}
	*lst = NULL;
}
