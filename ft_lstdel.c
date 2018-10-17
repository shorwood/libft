/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstdel.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 17:41:54 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 17:41:27 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **lst, void (*fnc)(void*, size_t))
{
	t_list *buf;

	if (!lst || !*lst || !fnc)
		return ;
	while (*lst)
	{
		buf = (*lst)->next;
		fnc((*lst)->content, (*lst)->content_size);
		free(*lst);
		*lst = buf;
	}
	*lst = (t_list*)0;
}
