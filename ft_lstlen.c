/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstlen.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/21 02:20:25 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/24 10:47:50 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_lstlen(t_list **lst)
{
	t_list	*cur;
	size_t	len;

	if (!lst || !*lst)
		return (0);
	len = 1;
	cur = *lst;
	while ((cur = cur->next))
		len++;
	return (len);
}
