/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstpush.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 17:41:54 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/24 10:53:31 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstpush(t_list **lst, const void *ptr)
{
	if (!lst)
		return (NULL);
	if (!*lst)
		return ((*lst = ft_lstinew(ptr, NULL)));
	return ((ft_lstlast(lst)->next = ft_lstinew(ptr, NULL)));
}
