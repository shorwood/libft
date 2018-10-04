/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 22:08:58 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/04 15:56:16 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_strcmp(const char *str, const char *cmp)
{
	if (!*str && !*cmp)
		return (0);
	if (*str == *cmp)
		return (ft_strcmp(str + 1, cmp + 1));
	return (*str - *cmp);
}
