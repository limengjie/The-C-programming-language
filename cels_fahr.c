/*
 * ===========================================================================
 *
 *         Author:  Ming Chen, v.mingchen@gmail.com
 *        Created:  04/24/2014 07:37:30 PM
 *
 *    Description:  
 *
 * ===========================================================================
 */
#include <stdio.h>
#define LOWER 0
#define UPPER 100
#define STEP 5

float fahr2celsius(float fahr);
void main(){
	float fahr, celsius;
	printf("fahr\tcelsius\n");
	for (fahr = LOWER; fahr <= UPPER;fahr+= STEP){
		celsius = fahr2celsius(fahr);
		printf("%.2f\t%.2f\n",fahr, celsius);
	}
	
}

float fahr2celsius(float fahr){
	float cel;
	cel = 5.0/9.0 * (fahr - 32.0);
	return cel;
}
