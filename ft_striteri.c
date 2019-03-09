/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_striteri.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/12 08:36:56 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/24 11:39:47 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_striteri(char *str, void (*fnc)(unsigned int, char*))
{
	unsigned int idx;

	if (!str || !fnc)
		return ;
	idx = 0;
	while (*str)
		fnc(idx++, str++);
}
