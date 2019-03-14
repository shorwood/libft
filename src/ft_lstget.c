/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstget.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/14 03:55:33 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/14 03:57:45 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_lstget(t_list **lst, size_t idx)
{
	t_list *cur;

	if (!lst || !*lst)
		return (NULL);
	cur = *lst;
	while (idx-- && cur->next)
		cur = cur->next;
	return (cur->data);
}
