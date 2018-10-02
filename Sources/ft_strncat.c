/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 18:51:25 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 18:19:14 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strncat(char *dst, char *src, int n)
{
	char *buf;

	if (!dst)
	{
		src[n - 1] = '\0';
		return (src);
	}
	if (!src)
		return (ft_strncat(src, dst, n));
	buf = dst;
	while (*buf)
		buf++;
	while (n--)
		*buf++ = *src++;
	*buf = '\0';
	return (dst);
}
