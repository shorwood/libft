/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lststr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 17:57:57 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/05 05:26:08 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lststr(t_list **lst, const char *str)
{
	t_list	*cur;
	int		idx;

	if (!lst || !*lst)
		return (-1);
	idx = 0;
	cur = *lst;
	while (cur)
	{
		if (!ft_strcmp(cur->data, str))
			return (idx);
		cur = cur->next;
		idx++;
	}
	return (-1);
}
