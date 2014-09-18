/*
 * ===========================================================================
 *
 *         Author:  Ming Chen, v.mingchen@gmail.com
 *        Created:  05/09/2014 08:59:01 AM
 *
 *    Description:  Using pointer to implement some string function
 *
 * ===========================================================================
 */

#include <stdio.h>
#include <string.h>
#define MAXLEN 100

void strCat(char *s, char *t){
	while (*s++)
		;
	s--;
	while(*s++ = *t++)
		;

}

void strnCpy(char *s, char *t, int n){
	int i = 0;
	do{
		*(t+i) = *(s+i);
		i++;
	}while (*(s+i) != '\0' && i < n);
}

main() {
	/*char *s0 = "abcd", *s1 = "efg", *s2 = "def", st[MAXLEN];*/
	char s0[MAXLEN] = "abcd", s1[MAXLEN] = "efg";
	strCat(s0, s1);
	printf("New st is %s.\n", s0);
	strnCpy(s1, s0, 2);
	printf("%s\n", s0);
	return 0;
}

