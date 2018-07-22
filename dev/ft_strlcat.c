/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 18:51:25 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 23:36:09 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	char *str_s;

	str_s = str;
	while (*str)
		str++;
	return (str - str_s);
}

unsigned int	ft_strlcat(char *dst, char *src, int n)
{
	char			*src_s;
	unsigned int	dst_len;

	src_s = src;
	dst_len = 0;
	while (*dst && n)
	{
		dst_len++;
		dst++;
		n--;
	}
	if (n < 1)
		return (dst_len + ft_strlen(src_s));
	while (*src)
	{
		if (n != 1)
		{
			*dst = *src;
			dst++;
			n--;
		}
		src++;
	}
	*dst = '\0';
	return (dst_len + ft_strlen(src_s));
}
