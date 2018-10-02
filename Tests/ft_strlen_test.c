/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlen_test.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 15:40:11 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/02 18:32:19 by shorwood    ###    #+. /#+    ###.fr     */
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

	str = (char*)malloc(65535 * sizeof(char*));

	//--- Testing with an empty word.
	strcpy(str, "");
	printf("String with 0 characters:		[%s]\n", (strlen(str) == ft_strlen(str)) ? "OK" : "KO");

	//--- Testing normal behavior.
	strcpy(str, "word");
	printf("String with 4 characters: 		[%s]\n", (strlen(str) == ft_strlen(str)) ? "OK" : "KO");

	//--- Testing with a lot of characters.
	memset(str, '0', 65535);
	printf("String with 65535 characters:	[%s]\n", (strlen(str) == ft_strlen(str)) ? "OK" : "KO");

	free(str);
	return (0);
}
