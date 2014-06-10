/*
 * ===========================================================================
 *
 *         Author:  Ming Chen, v.mingchen@gmail.com
 *        Created:  06/10/2014 05:04:12 AM
 *
 *    Description:  Tower of Hanoi
 *
 * ===========================================================================
 */

#include <stdio.h>

void Hanoi(int n, char x, char y, char z) {
	if (n == 1)
		printf("Move plate from %c to %c\n", x, z);
	else {
		Hanoi(n - 1, x, z, y);
		printf("Move plate from %c to %c\n", x, z);
		Hanoi(n - 1, y, x, z);
	}
}
main () {
	Hanoi(3, 'A', 'B', 'C');
}
