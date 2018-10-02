/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strskpnbr.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/24 03:32:58 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/24 03:36:01 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strskpnbr(char *str)
{
	while (*str >= '0' && *str++ <= '9')
		;
	return (str);
}
