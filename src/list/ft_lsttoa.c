/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lsttoa.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/15 06:51:01 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/17 07:47:26 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	**ft_lsttoa(t_list **lst)
{
	void	**arr;
	void	**buf;
	t_list	*lsti;

	if (ft_lstnull(lst))
		return (NULL);
	if (!(arr = (void**)malloc((ft_lstlen(lst) + 1) * sizeof(void*))))
		return (NULL);
	buf = arr;
	lsti = *lst;
	while (lsti)
	{
		*buf++ = lsti->data;
		lsti = lsti->next;
	}
	buf = NULL;
	return (arr);
}
