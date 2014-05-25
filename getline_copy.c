/*
 * ===========================================================================
 *
 *         Author:  Ming Chen, v.mingchen@gmail.com
 *        Created:  05/02/2014 08:30:49 PM
 *
 *    Description: book p21 
 *
 * ===========================================================================
 */

#include <stdio.h>
#define MAXLINE 1000

int getLine(char s[], int lim);
void copy(char from[], char to[]);

int main() {
	char line[MAXLINE], maxline[MAXLINE];
	int len, maxlen = 0;

	while ((len = getLine(line, MAXLINE)) > 0) {
			if(len > maxlen){
				maxlen = len;
				copy(line,maxline); 
			}
	}
	printf("max length is %d.\n", maxlen);
	printf("%s\n", maxline);

	return 0;
}

//getline() is used to read and save a line to s[] and return its length
int getLine(char s[], int lim){
/*int getLine(char *s, int lim){*/
	int i, c;

	for(i=0; i<lim-1 && (c=getchar()) != EOF && c != '\n'; i++) 
		s[i] = c;
	if(c == '\n')
		s[i++] = c;
	s[i] = '\0';
	/*printf("line is %s\n", s);*/

	return i;
}

void copy(char from[], char to[]){
	int i = 0;
	
	while(to[i] = from[i])
		i++;
	/*printf("Maxline is %s\n", to);*/
}

	
