/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstilast.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 17:41:54 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/10 06:25:03 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstilast(t_list **lst)
{
	t_list	*lsti;

	if (!lst || !*lst)
		return (NULL);
	lsti = *lst;
	while (lsti->next)
		lsti = lsti->next;
	return (lsti);
}
