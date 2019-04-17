/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   math.h                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/05 09:55:56 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/17 06:05:59 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

/*
** Computes the factorial of 'n'.
*/
double				ft_fact(double n);

/*
** Computes the factorial of 'n'.
*/
float				ft_factf(float n);

/*
** Computes the factorial of 'n'.
*/
long double			ft_factl(long double n);

/*
** Computes the factorial of 'n'.
*/
unsigned long long	ft_factillu(unsigned long long n);

/*
** Computes the closest value to the square root of 'n'.
*/
unsigned long long	ft_sqrtillu(unsigned long long n);

/*
** Computes the closest value of 'x' to the power of 'n'.
*/
long long			ft_powill(long long x, unsigned int n);
#endif
