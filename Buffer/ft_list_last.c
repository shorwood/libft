/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list_last.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/18 12:11:01 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 02:29:51 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

t_list	*ft_list_last(t_list *lst)
{
	if (!lst)
		return ((t_list*)0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
