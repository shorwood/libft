/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft.h                                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 02:13:36 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/21 19:46:15 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef _FT_H
# define _FT_H

# define _CHR char
# define _CCHR const char
# define _INT int
# define _SHR short
# define _LNG long
# define _LLNG long long
# define _UCHR unsigned char
# define _USHR unsigned short
# define _UINT unsigned int
# define _ULNG unsigned long
# define _ULLNG unsigned long long

typedef _CHR	*t_str;
typedef _CCHR	*t_cstr;
typedef _UCHR	t_bool;

typedef struct		s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;


#endif
