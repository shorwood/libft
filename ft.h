/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft.h                                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mintran <mintran@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/21 19:23:29 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/07/23 20:47:52 by mintran     ###    #+. /#+    ###.fr     */
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
int					ft_atoi_base(char *str, int base);
int					ft_ctoi(char c);
int					ft_factorial(int n);
int					ft_fibonacci(int n);
void				ft_list_clear(t_list **clr);
t_list				*ft_list_last(t_list *lst);
t_list				*ft_list_new(void *data);
void				ft_list_push_back(t_list **lst, void *data);
int					ft_list_size(t_list *lst);
int					ft_power(int x, unsigned int n);


char				*ft_strread(int fld, int bfs);
int					ft_strcmp(char *str, char *cmp);
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int x);
int					ft_strlen(char *str);
char				*ft_strcat(char *dst, char *src);
char				*ft_strchar(char *str, char *c);
int					ft_strcmp(char *str, char *cmp);
char				*ft_strcpy(char *dst, char *src);
char				*ft_strdup(char *str);
int					ft_strlen(char *str);
int					ft_strlinecnt(char *str);
int					ft_strlinelen(char *str);
char				*ft_s_strcat(char *dst, char *src);
char				*ft_s_strncat(char *dst, char *src, unsigned int n);
char				*ft_strrect(char *s, unsigned int w, unsigned int h);

#endif
