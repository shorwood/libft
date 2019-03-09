/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 17:57:57 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/24 12:27:11 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	**ft_lstmap(t_list **lst, void *(*fnc)(void *data))
{
	t_list	**map;
	t_list	*cur;
	t_list	*new;

	if (!lst || !(map = ft_lstnew(0)))
		return (NULL);
	cur = *lst;
	if (!cur || !(*map = new = ft_lstinew(fnc(cur->data), NULL)))
		return (map);
	while ((cur = cur->next))
		if (!(new = new->next = ft_lstinew(fnc(cur->data), NULL)))
			break;
	return (map);
}
