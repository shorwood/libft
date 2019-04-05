/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstpop.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 17:57:57 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/24 13:16:40 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_lstpop(t_list **lst)
{
	t_list	*cur;
	void	*dat;

	if (!lst || !*lst)
		return (NULL);
	cur = *lst;
	while (cur->next->next)
		cur = cur->next;
	dat = cur->next->data;
	free(cur->next);
	cur->next = NULL;
	return (dat);
}
