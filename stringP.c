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
	while(*s++)
		;
	s--;
	while(*s++ = *t++)
		;

}
int strEnd(char *s, char *t){
	int i;
	for(;*s != '\0'; *s++){
		for(i = 0; *(s + i) != '\0' && *(s+i) == *(t+i); i++)
			;
		if(i > 0 && *(t+i) == '\0' && *(s+i)== '\0')
			return 1;
	}
	return 0;
}
void strnCpy(char *s, char *t, int n){
	int i = 0;
	do{
		*(t+i) = *(s+i);
		i++;
	}while(*(s+i) != '\0' && i < n);
}

main(){
	char *s0 = "abcd", *s1 = "efg", *s2 = "def", st[MAXLEN];
	strCat(st, s0);
	strCat(st, s1);
	printf("New st is %s.\n", st);
	strnCpy(s1, st, 2);
	printf("%s\n", st);
	return 0;
}

