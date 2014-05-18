/*
 * ===========================================================================
 *
 *         Author:  Ming Chen, v.mingchen@gmail.com
 *        Created:  04/24/2014 07:30:51 PM
 *
 *    Description:  
 *
 * ===========================================================================
 */
#include <stdio.h>
#include <string.h>
#define MAXLEN 100
main(){
	int i;
	char s[MAXLEN] = "12345";
	char *p = s + 2;
	printf("The num of elements between two ptrs is %d\n", p-s+1);
	printf("%s \t %s\n",s, p);
	/*printf("Length of string is %d\n", strlen(s));*/
	/*printf("Hello world!\n");
	for(i = 0; i < 1; i++){
		printf("%d\n", i);
		if(i == 0)
			break;
	}
	printf("%d\n", i);
	*/

}

