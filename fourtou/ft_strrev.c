/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrev.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 14:53:57 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/06 23:35:51 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *string)
{
	int i;

	i = 0;
	while (string[i])
	{
		i++;
	}
	return (i);
}

void	ft_swap(int *a, int *b)
{
	int		buffer;

	buffer = *a;
	*a = *b;
	*b = buffer;
}

char	*ft_strrev(char *str)
{
	char	buffer;
	int		i;
	int		n;

	i = 0;
	n = ft_strlen(str) - 1;
	while (i < n)
	{
		buffer = str[i];
		str[i] = str[n];
		str[n] = buffer;
		n--;
		i++;
	}
	return (str);
}
