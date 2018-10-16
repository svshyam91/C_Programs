/*
	Problem: Given n, print the pattern as shown below:-

	Ex: n = 5 ( Height of the pattern )

		1
		121
		12321
		1234321
		123454321

	Author: Shyam Kumar

*/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int n, i, j;
	scanf("%d",&n);

	/* In the given pattern the max. number of rows are equal to 
		n and max. columns are equal to n*2-1 */

	for( i = 0; i < n; i++ ) {		// Row

		/* cols gives the number of columns for ith row */
		cols = i*2+1;

		for( j = 0; j < cols; j++ ) {	// Column

			/* For printing increasing number in each row */
			if( j <= cols/2)
				printf("%d",j+1);

			/* For printing decreasing number in each row */
			else
				printf("%d",cols-j);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
