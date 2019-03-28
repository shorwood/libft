/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstprm.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/26 22:27:00 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/28 05:11:42 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static t_lst	ft_lstprm_3(t_lst lst)
{
	void *elm0;
	void *elm1;
	void *elm2;
	
	elm0 = (*lst)->data;
	elm1 = (*lst)->next->data;
	elm2 = (*lst)->next->next->data;
	return (ft_lstnew(6, 
		ft_lstcpy(lst),
		ft_lstnew(3, elm0, elm2, elm1),
		ft_lstnew(3, elm1, elm0, elm2),
		ft_lstnew(3, elm1, elm2, elm0),
		ft_lstnew(3, elm2, elm0, elm1),
		ft_lstnew(3, elm2, elm1, elm0)));
}

/* ************************************************************************** */

t_lst		ft_lstprm(t_lst lst)
{
	t_lst 	arr;
	t_lst	buf;
	size_t	off;
	size_t	len;

	if ((len = ft_lstlen(lst)) == 3)
		return (ft_lstprm_3(lst));
	if (len == 2)
		return (ft_lstnew(2, ft_lstcpy(lst),
				ft_lstnew(2, ft_lstget(lst, 1), ft_lstget(lst, 0))));
	if (len == 1)
		return (ft_lstcpy(lst));
	arr = ft_lstnew(0);
	off = 0;
	while (off < len)
	{
		buf = ft_lstcpy(lst);
		t_lst elm = ft_lstslice(buf, off++, 1);
		t_lst perm = ft_lstprm(buf);
		t_lsti tmp = *perm;
		while (tmp)
		{
			ft_lstadd(tmp->data, (*elm)->data);
			ft_lstadd(arr, tmp->data);
			tmp = tmp->next;
		}
	}
	return (ft_lstrev(arr));
}