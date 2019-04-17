/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstdel.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 17:41:54 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/10 06:31:59 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lstdel(t_list **lst, size_t i)
{
	t_list	*lsti;
	void	*ptr;

	if (ft_lstnull(lst))
		return (NULL);
	if (i == 0)
		return (ft_lstshift(lst));
	if (!(lsti = ft_lstidel(lst, i)))
		return (NULL);
	ptr = lsti->data;
	free(lsti);
	return (ptr);
}
