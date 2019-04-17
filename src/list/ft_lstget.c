/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstget.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/14 03:55:33 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/10 06:29:27 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lstget(t_list **lst, size_t i)
{
	t_lsti lsti;

	if (ft_lstnull(lst))
		return (NULL);
	lsti = ft_lstiget(lst, i);
	return (lsti ? lsti->data : NULL);
}
