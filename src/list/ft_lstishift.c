/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstishift.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 17:57:57 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/10 05:22:08 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstishift(t_list **lst)
{
	t_list	*lsti;

	if (ft_lstnull(lst))
		return (NULL);
	lsti = *lst;
	*lst = lsti->next;
	return (lsti);
}
