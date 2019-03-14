/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 17:57:57 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/14 05:34:12 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	**ft_lstmap(t_list **lst, void *(*fnc)(void *data))
{
	t_list	**new;
	t_list	*cur;
	t_list	*map;

	if (!lst || !*lst || !(new = ft_lstnew(0)))
		return (NULL);
	cur = *lst;
	if (!cur || !(*new = ft_lstinew(fnc(cur->data), NULL)))
		return (new);
	map = *new;
	while ((cur = cur->next))
	{
		if (!(map = ft_lstinew(fnc(cur->data), NULL)))
			break ;
		map = map->next;
	}
	return (new);
}
