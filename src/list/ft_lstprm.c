/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstprm.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/26 22:27:00 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/17 09:35:34 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static t_lst	ft_lstprm4(void *ptr0, void *ptr1, void *ptr2, void *ptr3)
{
	return (ft_lstnew(24,
		ft_lstnew(4, ptr0, ptr1, ptr2, ptr3),
		ft_lstnew(4, ptr0, ptr1, ptr3, ptr2),
		ft_lstnew(4, ptr0, ptr2, ptr1, ptr3),
		ft_lstnew(4, ptr0, ptr2, ptr3, ptr1),
		ft_lstnew(4, ptr0, ptr3, ptr1, ptr2),
		ft_lstnew(4, ptr0, ptr3, ptr2, ptr1),
		ft_lstnew(4, ptr1, ptr0, ptr2, ptr3),
		ft_lstnew(4, ptr1, ptr0, ptr3, ptr2),
		ft_lstnew(4, ptr1, ptr2, ptr0, ptr3),
		ft_lstnew(4, ptr1, ptr2, ptr3, ptr0),
		ft_lstnew(4, ptr1, ptr3, ptr0, ptr2),
		ft_lstnew(4, ptr1, ptr3, ptr2, ptr0),
		ft_lstnew(4, ptr2, ptr0, ptr1, ptr3),
		ft_lstnew(4, ptr2, ptr0, ptr3, ptr1),
		ft_lstnew(4, ptr2, ptr1, ptr0, ptr3),
		ft_lstnew(4, ptr2, ptr1, ptr3, ptr0),
		ft_lstnew(4, ptr2, ptr3, ptr0, ptr1),
		ft_lstnew(4, ptr2, ptr3, ptr1, ptr0),
		ft_lstnew(4, ptr3, ptr0, ptr1, ptr2),
		ft_lstnew(4, ptr3, ptr0, ptr2, ptr1),
		ft_lstnew(4, ptr3, ptr1, ptr0, ptr2),
		ft_lstnew(4, ptr3, ptr1, ptr2, ptr0),
		ft_lstnew(4, ptr3, ptr2, ptr0, ptr1),
		ft_lstnew(4, ptr3, ptr2, ptr1, ptr0)));
}

/*
** *****************************************************************************
*/

static t_lst	ft_lstprm3(void *ptr0, void *ptr1, void *ptr2)
{
	return (ft_lstnew(6,
		ft_lstnew(3, ptr0, ptr1, ptr2),
		ft_lstnew(3, ptr0, ptr2, ptr1),
		ft_lstnew(3, ptr1, ptr0, ptr2),
		ft_lstnew(3, ptr1, ptr2, ptr0),
		ft_lstnew(3, ptr2, ptr0, ptr1),
		ft_lstnew(3, ptr2, ptr1, ptr0)));
}

/*
** *****************************************************************************
*/

static t_lst	ft_lstprm2(void *ptr0, void *ptr1)
{
	return (ft_lstnew(2,
		ft_lstnew(2, ptr0, ptr1),
		ft_lstnew(2, ptr1, ptr0)));
}

/*
** *****************************************************************************
*/

static t_lst	ft_lstprmn(t_lst lst, int len)
{
	t_lst	arr;
	t_lst	buf;
	void	*elm;
	t_lst	prm;
	int		i;

	i = 0;
	arr = ft_lstnew(0);
	while (i < len)
	{
		buf = ft_lstcpy(lst);
		elm = ft_lstdel(buf, i++);
		prm = ft_lstprm(buf);
		while (*prm)
		{
			ft_lstadd((*prm)->data, elm);
			ft_lstadd(arr, (*prm)->data);
			*prm = (*prm)->next;
		}
	}
	return (ft_lstrev(arr));
}

/*
** *****************************************************************************
*/

t_lst			ft_lstprm(t_lst lst)
{
	int	len;

	if ((len = ft_lstlen(lst)) == 4)
		return (ft_lstprm4((*lst)->data, (*lst)->next->data,
		(*lst)->next->next->data, (*lst)->next->next->next->data));
	else if (len == 3)
		return (ft_lstprm3((*lst)->data, (*lst)->next->data,
		(*lst)->next->next->data));
	else if (len == 2)
		return (ft_lstprm2((*lst)->data, (*lst)->next->data));
	else if (len == 1)
		return (ft_lstcpy(lst));
	else
		return (ft_lstprmn(lst, len));
}
