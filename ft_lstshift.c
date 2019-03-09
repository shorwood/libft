/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstshift.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 17:57:57 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/24 13:23:02 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_lstshift(t_list **lst)
{
	t_list	*cur;
	void	*dat;

	if (!lst || !*lst)
		return (NULL);
	cur = *lst;
	dat = cur->data;
	*lst = cur->next;
	free(cur);
	return (dat);
}
