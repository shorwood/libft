/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstidel.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 17:41:54 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/10 06:31:32 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstidel(t_list **lst, size_t i)
{
	t_list	*lsti;
	t_list	*prev;
	t_list	*next;

	if (i == 0)
		return (ft_lstishift(lst));
	prev = ft_lstiget(lst, i - 1);
	lsti = prev->next;
	if (!lsti)
		return (NULL);
	next = lsti->next;
	prev->next = next;
	lsti->next = NULL;
	return (lsti);
}
