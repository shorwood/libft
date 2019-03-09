/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstfind.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 17:57:57 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/24 14:38:47 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstfind(t_list **lst, int (*fnc)(void *dat))
{
	t_list	*cur;
	int		idx;

	if (!lst || !*lst)
		return (-1);
	idx = 0;
	cur = *lst;
	while (cur)
	{
		if (fnc(cur->data))
			return (idx);
		cur = cur->next;
		idx++;
	}
	return (-1);
}
