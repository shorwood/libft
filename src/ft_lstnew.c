/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 17:41:54 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/21 04:03:59 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdarg.h>
#include "libft.h"

t_list	**ft_lstnew(size_t len, ...)
{
	va_list	args;
	t_list	**lst;
	t_list	*lsti;

	if (!(lst = (t_list**)malloc(sizeof(t_list*))))
		return (NULL);
	*lst = NULL;
	if (!len)
		return (lst);
	va_start(args, len);
	if (!(*lst = ft_lstinew(va_arg(args, void*), NULL)))
		return (lst);
	lsti = *lst;
	while (--len)
	{
		if (!(lsti->next = ft_lstinew(va_arg(args, void*), NULL)))
			break ;
		lsti = lsti->next;
	}
	va_end(args);
	return (lst);
}
