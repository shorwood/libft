/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstdel.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 17:41:54 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 20:32:32 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **lst, void (*fnc)(void*, size_t))
{
	if (!lst || !fnc)
		return ;
	if ((*lst)->next)
		ft_lstdel(&(*lst)->next, fnc);
	fnc((*lst)->content, (*lst)->content_size);
	free(*lst);
	*lst = (t_list*)0;
}
