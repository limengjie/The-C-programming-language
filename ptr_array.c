/*
 * ===========================================================================
 *
 *         Author:  Ming Chen, v.mingchen@gmail.com
 *        Created:  06/12/2014 07:57:05 PM
 *
 *    Description:  
 *
 * ===========================================================================
 */

#include <stdio.h>
#include <string.h>

#define MAXLINE 5000
#define MAXLEN 1000

/*char *lineptr[MAXLINE];*/
/*  
int readline(char *[MAXLINE], int nlines);
void writeline(char *[], int nlines);
int Getline(char *, int);
*/
/*void Qsort(char *lineptr[], int left, int right);*/

int Getline(char s[], int lim) {
	int c, i = 0;

	while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
		s[i++] = c;
	if (c == '\n')
		s[i++] = c;
	s[i] = '\0';
	/*printf("%s\n", s);*/

	return i;
}

int readline(char lineptr[][MAXLEN], int maxline) {
	int len, nlines = 0;
	char line[MAXLEN];

	while (len = Getline(line, MAXLEN)) {
		if (nlines >= maxline)
			return -1;
		else if (len < MAXLEN) {
			line[len - 1] = '\0';
			strcpy(lineptr[nlines++], line);
			/*printf("%d \n", len);*/
		}
	}

	return nlines;
}

void writeline(char *lineptr[], int nlines) {
	int i = 0;

	while ((--nlines) >= 0)
		printf("%s\n", lineptr[i++]);
}

void Qsort(char *lineptr[], int left, int right) {
	int i, last;
	void swap(char *lineptr[], int i, int j);

	if (left >= right)
		return;
	swap(lineptr, left, (right + left) / 2);
	last = left;
	for (i = left + 1; i <= right; i++)
		if (strcmp(lineptr[i], lineptr[left]) < 0)
				swap(lineptr, ++last, i);
	swap(lineptr, left, last);
	Qsort(lineptr, left, last - 1);
	Qsort(lineptr, last + 1, right);
}

void swap(char *v[], int i, int j) {
	char *temp;

	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}

main() {
	int nlines, i;
	char *lineptr[MAXLINE], lines[MAXLINE][MAXLEN];

	if (nlines = readline(lines, MAXLINE)) {
		for (i = 0; i < nlines; i++) 
			lineptr[i] = lines[i];
		Qsort(lineptr, 0, nlines - 1);
		/*printf("%d lines\n", nlines);*/
		writeline(lineptr, nlines);
		
		return 0;
	}
	else {
		printf("Too big to sort.\n");

		return 1;
	}
}


