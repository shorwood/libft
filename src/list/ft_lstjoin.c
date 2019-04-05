/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 17:41:54 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/14 01:08:59 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_lstjoin(t_list **lst, const char *sep)
{
	char	*str;
	char	*buf;
	char	*src;
	t_list	*cur;

	if (!lst || !*lst)
		return (NULL);
	if (!sep || !*sep)
		return (ft_lstcat(lst));
	if (!(str = (char*)malloc((ft_lstacc(lst, (int(*)(void *data))ft_strlen) +
		(ft_lstlen(lst) - 1) * ft_strlen(sep) + 1) * sizeof(char))))
		return (NULL);
	buf = str;
	cur = *lst;
	while (cur)
	{
		src = (char*)cur->data;
		ft_strcpy(buf, src);
		if (cur->next)
			ft_strcpy((buf = ft_strchr(buf, '\0')), sep);
		buf = ft_strchr(buf, '\0');
		cur = cur->next;
	}
	*buf = '\0';
	return (str);
}
