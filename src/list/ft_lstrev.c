/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstrev.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/14 04:00:59 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/10 05:07:54 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	**ft_lstrev(t_list **lst)
{
	t_list **new;
	t_list *cur;

	if (ft_lstnull(lst) || !(new = ft_lstnew(0)))
		return (NULL);
	cur = *lst;
	while (cur)
	{
		if (!ft_lstadd(new, cur->data))
			return (new);
		cur = cur->next;
	}
	return (new);
}
