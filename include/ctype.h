/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ctype.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/05 06:31:54 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/17 06:15:48 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_CTYPE_H
# define FT_CTYPE_H

/*
** Checks whether 'c' is either a digit a letter.
*/
int					ft_isalnum(int c);

/*
** Checks whether 'c' is an alphabetic letter.
*/
int					ft_isalpha(int c);

/*
** Checks whether 'c' is an ASCII character.
*/
int					ft_isascii(int c);

/*
** Checks whether 'c' is a blank character.
*/
int					ft_isblank(int c);

/*
** Checks whether 'c' is a control character.
*/
int					ft_iscntrl(int c);

/*
** Checks whether 'c' is a decimal digit character.
*/
int					ft_isdigit(int c);

/*
** Checks whether 'c' is a character with graphical representation.
*/
int					ft_isgraph(int c);

/*
** Checks whether 'c' is a lowercase letter.
*/
int					ft_islower(int c);

/*
** Checks whether 'c' is a printable character.
*/
int					ft_isprint(int c);

/*
** Checks whether 'c' is a punctuation character.
*/
int					ft_ispunct(int c);

/*
** Checks whether 'c' is a white-space character.
*/
int					ft_isspace(int c);

/*
** Checks if parameter 'c' is an uppercase alphabetic letter.
*/
int					ft_isupper(int c);

/*
** Checks whether 'c' is a hexdecimal digit character.
*/
int					ft_isxdigit(int c);

/*
** Returns lowercase equivalent of 'c' if it can.
*/
int					ft_tolower(int c);

/*
** Returns uppercase equivalent of 'c' if it can.
*/
int					ft_toupper(int c);
#endif
