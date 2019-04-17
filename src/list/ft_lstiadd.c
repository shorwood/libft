/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstiadd.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/17 09:42:12 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/17 09:42:16 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstiadd(t_list **lst, t_list *lsti)
{
	if (!lst || !lsti)
		return (NULL);
	lsti->next = *lst;
	return ((*lst = lsti));
}
