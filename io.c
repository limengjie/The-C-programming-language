/*
 * ===========================================================================
 *
 *         Author:  Ming Chen, v.mingchen@gmail.com
 *        Created:  04/24/2014 07:58:07 PM
 *
 *    Description:  
 *
 * ===========================================================================
 */

#include <stdio.h>

void main(){
	int nc, c;
	for(nc = 0;getchar() != EOF; nc++)//the same as while loop
		;
	printf("The number of input is %d\n", nc);
	if((c = getchar()) == EOF) 
		printf("EOF is %d\n", c);
}

