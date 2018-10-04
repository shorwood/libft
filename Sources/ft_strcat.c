/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcat.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 17:32:15 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/04 14:49:34 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strcat(char *dst, const char *src)
{
	char *buf;

	buf = dst;
	while (*buf)
		buf++;
	while (*src)
		*buf++ = *src++;
	*buf = '\0';
	return (dst);
}
