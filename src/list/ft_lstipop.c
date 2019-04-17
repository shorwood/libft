/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstipop.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 17:57:57 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/10 06:53:33 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstipop(t_list **lst)
{
	t_list	*prev;
	t_list	*lsti;

	if (ft_lstnull(lst))
		return (NULL);
	prev = *lst;
	while (prev->next->next)
		prev = prev->next;
	lsti = prev->next;
	prev->next = NULL;
	return (lsti);
}
