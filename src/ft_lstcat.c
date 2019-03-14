/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstcat.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 17:41:54 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/14 03:15:00 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_lstcat(t_list **lst)
{
	char	*str;
	char	*buf;
	t_list	*cur;

	if (!(str = ft_strnew((ft_lstacc(lst, (int(*)(void *data))ft_strlen)))))
		return (NULL);
	buf = str;
	cur = *lst;
	while (cur)
	{
		ft_strcpy(buf, (char*)cur->data);
		buf = ft_strchr(buf, '\0');
		cur = cur->next;
	}
	*buf = '\0';
	return (str);
}
