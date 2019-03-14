/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/13 20:15:16 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/14 01:08:05 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	**ft_lstsplit(t_list **lst, size_t i)
{
	t_list	*cur;
	t_list	**ret;

	if (!lst || !*lst || !i)
		return (NULL);
	if (!(ret = (t_list**)malloc(sizeof(t_list*))))
		return (NULL);
	*ret = *lst;
	cur = *lst;
	while (--i && cur->next)
		cur = cur->next;
	*lst = cur->next;
	cur->next = NULL;
	return (ret);
}
