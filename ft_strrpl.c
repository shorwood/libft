/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrpl.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 02:36:02 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 05:24:41 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	strrpl(char *str, char c, char r)
{
	if (!str)
		return ;
	while (*str)
		if (*str == c)
			*str++ = r;
		else
			str++;
}
