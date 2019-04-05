/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstfind.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 17:57:57 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/28 04:34:40 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstfind(t_list **lst, int (*fnc)(void *dat))
{
	t_list	*cur;
	size_t	idx;

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
