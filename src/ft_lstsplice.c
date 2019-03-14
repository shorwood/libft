/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstsplice.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/13 20:15:16 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/14 01:08:18 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	**ft_lstsplice(t_list **lst, size_t i, size_t n)
{
	t_list	*cur;
	t_list	*prv;
	t_list	**ret;

	if (!lst || !*lst)
		return (NULL);
	if (!i)
		return (ft_lstsplit(lst, n));
	cur = *lst;
	while (--i && cur->next)
		cur = cur->next;
	if (!(ret = (t_list**)malloc(sizeof(t_list*))))
		return (NULL);
	*ret = NULL;
	if (!(prv = cur))
		return (ret);
	while (n-- && cur->next)
		cur = cur->next;
	*ret = prv->next;
	prv->next = cur->next;
	cur->next = NULL;
	return (ret);
}
