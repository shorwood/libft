/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcpy_test.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: shorwood <shorwood@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 15:40:11 by shorwood     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/02 18:33:04 by shorwood    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Sources/ft_strcpy.c"

int		main(void)
{
	char *str0;
	char *str1;
	char *cpy;
	
	str0 = (char*)malloc(65535 * sizeof(char*));
	str1 = (char*)malloc(65535 * sizeof(char*));
	cpy = (char*)malloc(65535 * sizeof(char*));

	//--- Testing with an empty word.
	strcpy(cpy, "");
	strcpy(str0, cpy);
	ft_strcpy(str1, cpy);
	printf("String with 0 characters: 		[%s]\n", !strcmp(str0, str1) ? "OK" : "KO");

	//--- Testing normal behavior.
	strcpy(cpy, "word");
	strcpy(str0, cpy);
	ft_strcpy(str1, cpy);
	printf("String with 4 characters: 		[%s]\n", !strcmp(str0, str1) ? "OK" : "KO");

	//--- Testing with a lot of characters.
	memset(cpy, '0', 65535);
	strcpy(str0, cpy);
	ft_strcpy(str1, cpy);
	printf("String with 65535 characters:	[%s]\n", !strcmp(str0, str1) ? "OK" : "KO");

	free(str0);
	free(str1);
	free(cpy);
	return (0);
}
