/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoll.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 02:48:36 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 18:58:36 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

long long	ft_atoll(const char *str)
{
	long long	x;
	long long	s;

	x = 0;
	s = 1;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			s = -1;
	while (*str >= '0' && *str <= '9')
		x = x * 10 + *str++ - '0';
	return (x * s);
}
