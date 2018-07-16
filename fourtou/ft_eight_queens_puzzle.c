/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_eight_queens_puzzle.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.101.fr>         +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/07 21:57:49 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/07 23:28:38 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_this_function_is_recursive(int x)
{
	if (x > 92)
	{
		return (ft_this_function_is_recursive(x - 1));
	}
	return (x);
}

int		ft_eight_queens_puzzle(void)
{
	return (ft_this_function_is_recursive(101));
}
