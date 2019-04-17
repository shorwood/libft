/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstacc.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 17:57:57 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/10 05:29:43 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstacc(t_list **lst, int (*fnc)(void *data))
{
	t_list	*cur;
	int		x;

	if (ft_lstnull(lst))
		return (0);
	x = 0;
	cur = *lst;
	while (cur)
	{
		x += fnc(cur->data);
		cur = cur->next;
	}
	return (x);
}
