/*
 * ===========================================================================
 *
 *         Author:  Ming Chen, v.mingchen@gmail.com
 *        Created:  04/24/2014 08:26:46 PM
 *
 *    Description:  
 *
 * ===========================================================================
 */
#include <stdio.h>

void main(){
	int nt, nspace, nn, nc;
	char array[20];
	nt = nn = nspace = 0;
	for(nc=0;nc<20;nc++){
		char c = getchar();
		if(nc>0)
			if((array[nc-1] == c) == " ")
				continue;
		if(c == '\n'){
			nn++;
			array[nc] = "\n"; 
		}
	        else
			array[nc] = c;
	}
	for(int i=0; i< 20;i++)
		printf("%c", array[i]);

}

