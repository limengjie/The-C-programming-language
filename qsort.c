/*
 * ===========================================================================
 *
 *         Author:  Ming Chen, v.mingchen@gmail.com
 *        Created:  06/02/2014 07:28:49 PM
 *
 *    Description:  
 *
 * ===========================================================================
 */

#include <stdio.h>
#define MAXLEN 100

void qksort(int v[], int left, int right) {
	int i, last;
	void swap(int v[], int i, int j);

	if (left >= right)
		return;
	swap(v, left, (left + right)/2);
	last = left;
	for (i = left + 1; i <= right; i++)
		if (v[i] < v[left])
			swap(v, ++last, i);
	printf("left is %d\n", v[left]);
	printf("last is %d\n", v[last]);
	swap(v, left , last);
	printf("first half\n");
	for (i = left; i < last; i++)
		printf("%d\n", v[i]);
	printf("second half\n");
	for (i = last + 1; i < right + 1; i++)
		printf("%d\n", v[i]);
	qksort(v, left, last - 1);
	/*for (i = left; i < last; i++)*/
		/*printf("%d\n", v[i]);*/
	qksort(v, last + 1, right);
	/*for (i = last + 1; i < right + 1; i++)*/
		/*printf("%d\n", v[i]);*/
}

void swap(int v[], int i, int j) {
	int temp;

	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}

main () {
	/*int array[MAXLEN] = "985674321";*/
	int i, *p, max = 9;

	/*
	p = array;
	while (max >= 0) 
		*(p++) = max--;
	for (i = 0; i < 10; i++)
		printf("%dth is %d\n", i, array[i]);
		*/
	int array[10] = {1, 3, 2, 4, 0, 5, 9, 8, 7, 6};
	qksort(array, 0 , 9);
	printf("++++++++++++++++++++++++++++++++\n");
	for (i = 0; i < 10; i++)
		printf("%d\n", array[i]);
}
