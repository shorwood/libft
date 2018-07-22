/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft.h                                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 02:13:36 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 14:48:14 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef _FT_H
# define _FT_H


# define __ASSERT(cnd) \
	if (!(cnd)) return 

# define __MASSERT(var, typ, siz) \
	if ((var = (typ*)malloc(((size_t)siz) * sizeof(typ)))) return
	
typedef struct		s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;


#endif
