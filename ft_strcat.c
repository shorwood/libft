/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcat.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 17:32:15 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 06:02:18 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strcat(char *dst, char *src)
{
	char *buf;

	if (!dst || !src)
		return (dst);
	buf = dst;
	while (*buf++)
		;
	while (*src)
		*buf++ = *src++;
	*buf = '\0';
	return (dst);
}
