/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb2.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/04 19:37:20 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/05 23:13:06 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	sh_printn(char *str, int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		sh_powi(int x, int pow)
{
	int		y;
	int		i;

	y = 1;
	i = 0;
	while (i < pow)
	{
		y *= x;
		i++;
	}
	return (y);
}

char	*sh_itosn(int x, char *str, int n)
{
	int		i;
	int		y;
	int		z;

	i = 0;
	while (n > 0)
	{
		y = sh_powi(10, n);
		z = sh_powi(10, n - 1);
		str[i] = x % y / z;
		str[i] += 48;
		n--;
		i++;
	}
	return (str);
}

void	ft_print_comb2(void)
{
	int		i[2];
	char	buffer[2];

	i[1] = 0;
	while (i[1] <= 98)
	{
		i[0] = i[1] + 1;
		while (i[0] <= 99 && i[0] > i[1])
		{
			sh_printn(sh_itosn(i[1], buffer, 2), 2);
			ft_putchar(' ');
			sh_printn(sh_itosn(i[0], buffer, 2), 2);
			if (i[1] < 98)
			{
				sh_printn(", ", 2);
			}
			i[0]++;
		}
		i[1]++;
	}
}
