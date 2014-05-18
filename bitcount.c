/*
 * ===========================================================================
 *
 *         Author:  Ming Chen, v.mingchen@gmail.com
 *        Created:  05/05/2014 01:27:37 PM
 *
 *    Description:  
 *
 * ===========================================================================
 */
#include <stdio.h>

main(){
	int number = 0177;
	int bits;
	bits = bitcount(number);
	printf("%d\n", bits);
	return 0;
}

int bitcount(unsigned x){
	int i;
	for(i = 0; x != 0; i++){
		x &= x-1;
	}
	return i;
}
