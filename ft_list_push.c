/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_push.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 12:11:01 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 01:47:50 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

void	ft_list_push(t_list **lst, void *data)
{
	t_list *buf;

	if (!lst)
		return ;
	if (!*lst)
		*lst = ft_list_new(data);
	else
	{
		buf = *lst;
		while (buf->next)
			buf = buf->next;
		buf->next = ft_list_new(data);
	}
}
