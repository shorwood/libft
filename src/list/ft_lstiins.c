/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstiins.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/10 04:38:17 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/15 12:15:36 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstiins(t_list **lst, t_list *lsti, size_t i)
{
	t_list *prev;

	if (!lst || !lsti)
		return (NULL);
	if (i == 0)
		return (ft_lstiadd(lst, lsti));
	if (!(prev = ft_lstiget(lst, i - 1)))
		return (NULL);
	lsti->next = prev->next;
	prev->next = lsti;
	return (lsti);
}
