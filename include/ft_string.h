/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_string.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/05 08:52:38 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/06 14:02:00 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

/*
** Converts the 'str' string to lowercase.
*/
char	*ft_strtolower(char *str);

/*
** Converts the 'str' string to uppercase.
*/
char	*ft_strtoupper(char *str);

/*
** Uppercase the first character of each word of 'str' string.
*/
char	*ft_strcapitalize(char *str);

#endif