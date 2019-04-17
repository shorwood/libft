/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstiget.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/10 04:41:50 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/10 06:24:09 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstiget(t_list **lst, size_t i)
{
	t_list *lsti;

	if (ft_lstnull(lst))
		return (NULL);
	lsti = *lst;
	while (i-- && lsti)
		lsti = lsti->next;
	return (lsti);
}
