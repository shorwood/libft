/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcapitalize.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/10 05:58:53 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/10 18:30:14 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char *str_s;

	str_s = str;
	while (*str)
	{
		if ((*str >= '0' && *str <= '9')
		|| (*str >= 'A' && *str <= 'Z')
		|| (*str >= 'a' && *str <= 'z'))
		{
			if (*str >= 'a' && *str <= 'z')
				*str -= 32;
			str++;
			while ((*str >= '0' && *str <= '9')
			|| (*str >= 'A' && *str <= 'Z')
			|| (*str >= 'a' && *str <= 'z'))
			{
				if (*str >= 'A' && *str <= 'Z')
					*str += 32;
				str++;
			}
		}
		str++;
	}
	return (str_s);
}
