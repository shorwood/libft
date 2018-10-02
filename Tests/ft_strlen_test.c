/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlen_test.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 15:40:11 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/02 18:08:59 by shorwood    ###    #+. /#+    ###.fr     */
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

	str = (char*)malloc(4294967295 * sizeof(char*));

	//--- Testing normal behavior.
	strcpy(str, "word");
	printf("String with 4 characters: 			[%s]\n", (strlen(str) == ft_strlen(str) ? "OK" : "KO"));

	//--- Testing with a lot of characters.
	memset(str, '0', 4294967295);
	printf("String with 4294967295 characters:	[%s]\n", (strlen(str) == strlen(str) ? "OK" : "KO"));

	//--- Testing with an empty word.
	strcpy(str, "");
	printf("Empty string:						[%s]\n", (strlen(str) == ft_strlen(str) ? "OK" : "KO"));

	//--- Testing with a NULL pointer.
	str = NULL;
	printf("Null pointer: 						[%s]\n", (ft_strlen(str) == 0 ? "OK" : "KO"));
	free(str);
	return (0);
}
