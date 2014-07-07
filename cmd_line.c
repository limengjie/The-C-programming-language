/*
 * ===========================================================================
 *
 *         Author:  Ming Chen, v.mingchen@gmail.com
 *        Created:  06/16/2014 07:27:50 PM
 *
 *    Description:  
 *
 * ===========================================================================
 */
#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

/*
main (int argc, char *argv[]) {
	int i;

	for (i = 1; i < argc; i++)
		printf("%s%s", argv[i], " ");
	printf("\n");
	return 0;
}
*/

int Getline (char *line, int max);


int Getline(char s[], int lim)
{
	int c, i;

	for (i = 0; i<lim-1 && (c=getchar()) != EOF && c!='\n';++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

main (int argc, char *argv[])
{
	char line[MAXLINE];
	int found = 0;

	if (argc != 2)
		printf("Usage: find pattern\n");
	else
		while (Getline(line, MAXLINE) > 0)
			if (strcmp(line, argv[1]) == 0) {
				/*printf("%s", line);*/
				found++;
			}
	printf("Found %d times.\n", found);
	return found;
}


