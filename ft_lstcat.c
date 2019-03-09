/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstcat.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 17:41:54 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/24 14:49:29 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_lstcat(t_list **lst)
{
	char	*str;
	char	*buf;
	char	*src;
	t_list	*cur;

	if (!(str = (char*)malloc(
		(ft_lstacc(lst, (int(*)(void *data))ft_strlen) + 1) * sizeof(char))))
		return (NULL);
	buf = str;
	cur = *lst;
	while (cur)
	{
		src = (char*)cur->data;
		ft_strcpy(buf, src);
		buf = ft_strchr(buf, '\0');
		cur = cur->next;
	}
	*buf = '\0';
	return (str);
}
