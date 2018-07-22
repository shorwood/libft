/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft.h                                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 19:23:29 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/22 21:36:18 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef _FT_H
# define _FT_H

typedef struct		s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;

typedef struct		s_2d
{
	int				x;
	int				y;
}					t_2d;

typedef struct		s_3d
{
	int				x;
	int				y;
	int				z;
}					t_3d;

int					ft_atoi(char *str);
char				*ft_strread(int fld, int bfs);
int					ft_strcmp(char *str, char *cmp);
void				ft_putstr(char *str);
void				ft_putnbr(int x);
int					ft_strlen(char *str);
int					ft_strlinecnt(char *str);
int					ft_strlinelen(char *str);
char				*ft_s_strcat(char *dst, char *src);
char				*ft_s_strncat(char *dst, char *src, unsigned int n);
char				*ft_strrect(char *s, unsigned int w, unsigned int h);

#endif
