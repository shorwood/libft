/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 17:41:54 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 20:27:30 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void const *dta, size_t siz)
{
	t_list	*new;

	if (!(new = (t_list*)malloc(sizeof(t_list))))
		return (new);
	if (dta)
	{
		new->content_size = siz;
		new->content = malloc(siz);
		if (new->content)
			ft_memcpy(new->content, dta, siz);
	}
	else
	{
		new->content = NULL;
		new->content_size = 0;
	}
	new->next = (t_list*)0;
	return (new);
}
