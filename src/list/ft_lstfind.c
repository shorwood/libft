/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstfind.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 17:57:57 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/10 06:11:48 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstfind(t_list **lst, int (*fnc)(void *ptr))
{
	t_list	*cur;
	size_t	i;

	if (!lst || !*lst)
		return (-1);
	i = 0;
	cur = *lst;
	while (cur)
	{
		if (fnc(cur->data))
			return (i);
		cur = cur->next;
		i++;
	}
	return (-1);
}
