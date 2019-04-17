/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   binary.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/17 06:09:46 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/17 06:28:53 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef _LIBFT_BINARY_H
# define _LIBFT_BINARY_H
# include <stdlib.h>

typedef struct		s_byte
{
	uint_fast8_t	b0 : 1;
	uint_fast8_t	b1 : 1;
	uint_fast8_t	b2 : 1;
	uint_fast8_t	b3 : 1;
	uint_fast8_t	b4 : 1;
	uint_fast8_t	b5 : 1;
	uint_fast8_t	b6 : 1;
	uint_fast8_t	b7 : 1;
}					t_byte;

int					ft_bitread(uint8_t byte, int i);
void				ft_bitset(uint8_t *ptr, int i);
void				ft_bitclear(uint8_t *ptr, int i);
void				ft_bitwrite(uint8_t *ptr, int i, int val);
uint16_t			ft_bit16range(uint16_t val, int i, int n);
uint16_t			ft_bit16clamp(uint16_t val, int i, int n);

# ifdef __SIZEOF_INT128__

__uint128_t			ft_bit128range(__uint128_t val, int i, int n);
__uint128_t			ft_bit128clamp(__uint128_t val, int i, int n);
# endif
#endif
