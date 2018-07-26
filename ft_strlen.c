/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlen.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 17:23:57 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/26 09:14:58 by mintran     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	char *buf;

	if (!str)
		return (0);
	buf = str;
	while (*buf++)
		;
	return (buf - str);
}

/*
 * Version recursive
 * 
 * int ft_strlen(char *str)
 * {
 * 	if (*str++)
 * 		return (1 + ft_strlen(str));
 * 	return (0);
 * }
 *
 */
