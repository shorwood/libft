/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   list.h                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/06 14:48:01 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/17 06:17:11 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef _LIBFT_LIST_H
# define _LIBFT_LIST_H
# include <stdlib.h>

typedef struct		s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;
typedef	t_list		*t_lsti;
typedef t_lsti		*t_lst;
t_list				**ft_lstnew(size_t len, ...);

# define FT_LCLR_DATA 0b001
# define FT_LCLR_ITEM 0b010
# define FT_LCLR_LIST 0b100
# define FT_LCLR_ALL 0b111

# define FT_LSTFOREACH(lst, x, code) x=*lst; while(x){code; x=x->next;} x=*lst

void				ft_lstclr(t_list **lst, int flg);
t_list				*ft_lstinew(const void *ptr, const t_list *nxt);
t_list				*ft_lstadd(t_list **lst, const void *ptr);
t_list				*ft_lstiadd(t_list **lst, t_list *lsti);
t_list				*ft_lstpush(t_list **lst, const void *ptr);
void				*ft_lstpop(t_list **lst);
t_list				*ft_lstipop(t_list **lst);
void				*ft_lstshift(t_list **lst);
t_list				*ft_lstishift(t_list **lst);
t_list				**ft_lstsplit(t_list **lst, size_t i);
t_list				**ft_lstslice(t_list **lst, size_t i, size_t n);
void				*ft_lstlast(t_list **lst);
t_list				*ft_lstilast(t_list **lst);
size_t				ft_lstlen(t_list **lst);
void				*ft_lstget(t_list **lst, size_t i);
t_list				*ft_lstiget(t_list **lst, size_t i);
void				ft_lstiter(t_list **lst, void (*fnc)(void *dat));
void				ft_lstiteri(t_list **lst, void (*fnc)(void *dat, size_t));
t_list				**ft_lstmap(t_list **lst, void *(*fnc)(void *dat));
t_list				**ft_lstdup(t_list **lst);
t_list				**ft_lstcpy(t_list **lst);
t_list				**ft_lstrev(t_list **lst);
int					ft_lstacc(t_list **lst, int (*fnc)(void *dat));
size_t				ft_lstfind(t_list **lst, int (*fnc)(void *dat));
size_t				ft_lststr(t_list **lst, const char *str);
char				*ft_lstcat(t_list **lst);
char				*ft_lstjoin(t_list **lst, const char *sep);
t_list				**ft_lstprm(t_lst lst);
int					ft_lstnull(t_list **lst);
t_list				*ft_lstidel(t_list **lst, size_t i);
void				*ft_lstdel(t_list **lst, size_t i);
t_list				*ft_lstins(t_list **lst, void *ptr, size_t i);
t_list				*ft_lstiins(t_list **lst, t_list *lsti, size_t i);
void				**ft_lsttoa(t_list **lst);
/*
** TODO: Lists
**
** t
** size_t			*ft_lstidx(t_list **lst, t_list *lsti);
** t_list			*ft_lstset(t_list **lst, size_t idx, const void *ptr);
** t_list			**ft_lstfltr(t_list **lst, int (*fnc)(t_list *lsti));
*/
#endif
