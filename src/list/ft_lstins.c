/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstins.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/10 04:38:17 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/15 12:16:43 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstins(t_list **lst, void *ptr, size_t i)
{
	t_list *prev;
	t_list *new;

	if (!lst)
		return (NULL);
	if (i == 0)
		return (ft_lstadd(lst, ptr));
	if (!(prev = ft_lstiget(lst, i - 1)))
		return (NULL);
	if (!(new = ft_lstinew(ptr, prev->next)))
		prev->next = new;
	return (new);
}
