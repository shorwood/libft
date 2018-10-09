/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_isxdigit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/10 05:58:53 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/09 09:12:08 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_isxdigit(int c)
{
	return ((c >= 'a' && c <= 'f')
		|| (c >= 'A' && c <= 'F')
		|| (c >= '0' && c <= '9'));
}
