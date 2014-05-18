/*
 * ===========================================================================
 *
 *         Author:  Ming Chen, v.mingchen@gmail.com
 *        Created:  05/05/2014 02:02:11 PM
 *
 *    Description:  
 *
 * ===========================================================================
 */

#include <stdio.h>
#define MAXLINE 100

void squeeze(char s1[], char s2[]);

main(){
	char s2[MAXLINE];
	char c;
	int i;
	char s1[] = "aeiou";
	/*	
	s1[0] = 'a';
	s1[1] = 'e';
	s1[2] = 'i';
	s1[3] = 'o';
	s1[4] = 'u';
	s1[5] = '\0';
	*/	
	for(i = 0; i < MAXLINE && (c = getchar()) != '\n'; i++)
		s2[i] = c;
	s2[i] = '\0';
	squeeze(s1, s2);
	printf("%s\n", s2);
}

void squeeze(char s1[], char s2[]){
	int i, j, k;
	int isins1;
	for(i = j =0; s2[i] != '\0'; i++){
		isins1 = 0;
		for(k = 0; s1[k] != '\0'; k++)
			if(s2[i] == s1[k]){
				isins1 = 1;
				break;
			}
		if(!isins1)
			s2[j++] = s2[i];
	}
	s2[j] = '\0';
}
