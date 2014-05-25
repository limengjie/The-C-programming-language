/*
 * ===========================================================================
 *
 *         Author:  Ming Chen, v.mingchen@gmail.com
 *        Created:  05/23/2014 05:25:19 PM
 *
 *    Description:  
 *
 * ===========================================================================
 */

#include <stdio.h>
#include <string.h>
#define MAXLEN 100

void reverse(char s[]);
void reversen(char s[], int n);
void leftshift(char s[], int n); 
void rightshift(char s[], int n);

main () 
{
	char s0[MAXLEN] = "123456789";

	/*reverse(s0);*/
	/*reversen(s0, strlen(s0));*/
	/*reversen(s0 + 3, 3);*/
	rightshift(s0, 12);
	printf("%s\n", s0);

}

void reverse(char s[]) {
	int i = 0, j = strlen(s)- 1;
	int temp;

	while (i < j) {
		temp = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = temp;
		i++;
		j--;
	}
}

void reversen(char *s, int len) {
	int i = 0, j = len - 1, temp;

	while (i < j) {
		temp = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = temp;
		i++;
		j--;
	}
}

void leftshift(char s[], int nbits) {
	reversen(s, nbits);
	reversen(s + nbits, strlen(s) - nbits);
	reverse(s);
}

void rightshift(char s[], int nbits) {
	leftshift(s, strlen(s) - nbits);
}
