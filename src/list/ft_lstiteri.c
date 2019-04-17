/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstiteri.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 17:57:57 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/17 09:16:30 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiteri(t_list **lst, void (*fnc)(void *data, size_t))
{
	t_list *cur;
	size_t i;

	if (!lst || !fnc)
		return ;
	cur = *lst;
	i = 0;
	while (cur)
	{
		fnc(cur->data, i++);
		cur = cur->next;
	}
}
