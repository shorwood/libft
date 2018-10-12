/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_striteri.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/12 08:36:56 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/12 08:53:12 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_striteri(char *str, void (*fnc)(unsigned int, char*))
{
	unsigned int idx;

	idx = 0U;
	while (*str)
		fnc(idx++, str++);
}
