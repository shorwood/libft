/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcapitalize.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/10 05:58:53 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 14:42:19 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char *buf;

	buf = str;
	while (*buf)
	{
		if ((*buf >= '0' && *buf <= '9')
		|| (*buf >= 'A' && *buf <= 'Z')
		|| (*buf >= 'a' && *buf <= 'z'))
		{
			if (*buf >= 'a' && *buf <= 'z')
				*buf -= 32;
			buf++;
			while ((*buf >= '0' && *buf <= '9')
			|| (*buf >= 'A' && *buf <= 'Z')
			|| (*buf >= 'a' && *buf <= 'z'))
			{
				if (*buf >= 'A' && *buf <= 'Z')
					*buf += 32;
				buf++;
			}
		}
		buf++;
	}
	return (str);
}
