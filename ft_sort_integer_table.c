/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sort_integer_table.c                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/06 14:54:05 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/06 23:42:30 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_sort_integer_table(int *array, int n)
{
	int	i;
	int	buffer;

	i = 0;
	while (i < n)
	{
		if (array[i] > array[i + 1])
		{
			buffer = array[i + 1];
			array[i + 1] = array[i];
			array[i] = buffer;
			i = 0;
		}
		else
			i++;
	}
}
