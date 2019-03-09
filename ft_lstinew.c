/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstinew.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 17:41:54 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/24 09:36:27 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstinew(const void *ptr, const t_list *nxt)
{
	t_list	*new;

	if (!(new = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	new->data = (void*)ptr;
	new->next = (void*)nxt;
	return (new);
}
