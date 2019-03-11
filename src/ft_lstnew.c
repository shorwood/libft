/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 17:41:54 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/11 21:31:23 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdarg.h>
#include "libft.h"

t_list	**ft_lstnew(size_t len, ...)
{
	va_list	args;
	t_list	**new;
	t_list	*cur;

	if (!(new = (t_list**)malloc(sizeof(t_list*))))
		return (NULL);
	*new = NULL;
	if (!len)
		return (new);
	va_start(args, len);
	if (!(*new = cur = ft_lstinew(va_arg(args, void*), NULL)))
		return (new);
	while (--len)
		if (!(cur = cur->next = ft_lstinew(va_arg(args, void*), NULL)))
			break ;
	va_end(args);
	return (new);
}
