/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/04 19:37:20 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/05 22:25:14 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);

void	sh_printn(char *string, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putchar(string[i]);
		i++;
	}
}

void	ft_print_comb(void)
{
	char n[3];

	n[0] = '0';
	while (n[0] <= '7')
	{
		n[1] = n[0] + 1;
		while (n[1] <= '8')
		{
			n[2] = n[1] + 1;
			while (n[2] <= '9')
			{
				sh_printn(n, 3);
				if (n[0] < '7')
				{
					sh_printn(", ", 2);
				}
				n[2]++;
			}
			n[1]++;
		}
		n[0]++;
	}
}
