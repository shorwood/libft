/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 17:57:57 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/10 05:03:07 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	**ft_lstmap(t_list **lst, void *(*fnc)(void *data))
{
	t_list	*lsti;
	t_list	**new;
	t_list	*cur;

	if (ft_lstnull(lst) || !(new = ft_lstnew(0)))
		return (NULL);
	lsti = *lst;
	if (!lsti || !(*new = ft_lstinew(fnc(lsti->data), NULL)))
		return (new);
	cur = *new;
	while ((lsti = lsti->next))
	{
		if (!(cur->next = ft_lstinew(fnc(lsti->data), NULL)))
			break ;
		cur = cur->next;
	}
	return (new);
}
