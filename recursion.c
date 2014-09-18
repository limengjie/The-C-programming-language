/*
 * ===========================================================================
 *
 *         Author:  Ming Chen, v.mingchen@gmail.com
 *        Created:  06/08/2014 01:21:04 AM
 *
 *    Description: convert number to string 
 *
 * ===========================================================================
 */

#include <stdio.h>
#define MAXLEN 100

int d2b(int d, char *b) {
	int pos = 0;

	if(d/2)
		pos = d2b(d/2, b);
	b[pos++] = d%2 + '0';

	return pos;
}

main() {
	int d = 123, p;
	char bi[MAXLEN];

	p = d2b(d, bi);
	bi[p] = '\0';
	printf("%s\n", bi);

	return 0;
}
