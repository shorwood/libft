/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlen_test.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 15:40:11 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/02 17:41:38 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Sources/ft_strlen.c"

int		main(void)
{
	char *str;
	char *msg;

	str = (char*)malloc(256 * sizeof(char*));
	msg = "%s\n\tlibc: %d\n\tlibft: %d\n";

	//--- Testing normal behavior.
	strcpy(str, "word");
	printf(msg, str, strlen(str), ft_strlen(str));

	//--- Testing with an escape character.
	strcpy(str, "wor\0d");
	printf(msg, str, strlen(str), ft_strlen(str));

	//--- Testing with an empty word.
	strcpy(str, "");
	printf(msg, str, strlen(str), ft_strlen(str));

	//--- Testing with a NULL pointer.
	str = NULL;
	printf(msg, str, /*strlen(str)*/0, ft_strlen(str));
	return (0);
}
