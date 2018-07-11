/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 18:51:25 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/11 16:55:45 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *fnd)
{
	char *str_s;
	char *fnd_s;

	while (*str)
	{
		str_s = str;
		fnd_s = fnd;
		while (*str == *fnd)
		{
			str++;
			fnd++;
		}
		if (!*fnd)
			return (str_s);
		fnd = fnd_s;
		str++;
	}
	return (0);
}
