/*
 * ===========================================================================
 *
 *         Author:  Ming Chen, v.mingchen@gmail.com
 *        Created:  05/07/2014 07:44:21 PM
 *
 *    Description:  
 *
 * ===========================================================================
 */

#include <stdio.h>
#include <string.h>
#define MAX 100

void setbytes(char **target, int pos, int num, char source[]);
void setbytes(char *target[], int pos, int num, char source[]);
void setbytes(char target[], int pos, int num, char source[]);

main(){
	char x[] = "abcdefghijklmn";
	char y[] = "1234567890";
	setbytes(x, 4, 9, y);
}

void setbytes(char x[], int p, int n, char y[]){
	int i, j, len;
	char temp[MAX];
	for(i = 0; i < p ; i++)
		temp[i] = x[i];
	len = strlen(y);
	for(j = len - n;i < MAX && y[j] != '\0' && i < p + n; j++)
		temp[i++] = y[j];
	temp[i] = '\0';
	x = temp;
	printf("x = %s\n", x);
	x[0] = 'x';
	//abcd234567890
}

