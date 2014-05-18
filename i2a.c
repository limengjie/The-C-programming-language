/*
 * ===========================================================================
 *
 *         Author:  Ming Chen, v.mingchen@gmail.com
 *        Created:  05/08/2014 07:37:57 PM
 *
 *    Description:convert integer to string and reverse the string by recursion  
 *
 * ===========================================================================
 */
#include <stdio.h>
#include <string.h>
#define MAXLEN 100


int n = 123456;
char s[MAXLEN], t[MAXLEN]; // 654321
int iToa(int num, char str[]), iToaReverse(int n, char s[]);


int sReverse(char source[], char target[]){
	int pos = -1;
		
	if(*source){
		pos = sReverse(source + 1, target);
		target[pos] = *source;
	}

	return pos + 1;
}


main(){
	/*s[iToa(n, s)] = '\0';*/
	iToa(n,s);
	printf("%s\n", s);//123456
	sReverse(s, t);
	printf("The reversed string is %s\n", t);
	return 0;
}

int iToaReverse(int num, char *str) {
	int pos = 0;

	if (num / 10)
		pos = iToaReverse(num / 10, str + 1);

	*str = num % 10 + '0';
	
	return pos + 1;
}


int iToa(int num, char *str) {
	int pos = 0;

	if (num / 10)
		pos = iToa(num / 10, str);

	str[pos] = num % 10 + '0';

	return pos + 1;
}
