/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ctoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 02:42:30 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 05:27:38 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_ctoi(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
    if (c >= 'A' && c <= 'F')
		 return (c - 'A' + 10);
	if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	return (-1);
}
