/*
	Problem: Given n, print the pattern as shown below:-

	Ex: n = 5 ( Height of the pattern )

	1111111
	1222221
	1233321
	1234321
	1233321
	1222221
	1111111
	
	Author: Shyam Kumar

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int n, i, j, k;
	scanf("%d",&n);

	/* Note: Instead of directly printing the pattern we will first 
		store the values in a matrix and then print that matrix. */

	/* Dynamic Allocation of Array */
	int **arr = (int**)malloc( n * sizeof( int*) );
	for( i = 0; i < n; i++ ) 
		arr[i] = (int*)malloc( n * sizeof( int ) );


	/* This loops is for the numbers to be printed */
	for( k = 1; k <= (n/2+1); k++ ) {

		/* For these four loops, the starting point increases by 1 and
			ending point decreases by 1 corresponding to the outer loop(k) 
			So, we have used the value of k to increase the starting point and 
			decrease the ending point for every iteration of k */
		for( j = k-1; j < n-k; j++ ) 		// Top Row
			arr[k-1][j] = k;

		for( i = k-1; i < n-k; i++ ) 		// Right Column
			arr[i][n-k] = k;

		for( j = n-k; j >= k-1; j-- )		// Bottom Row
			arr[n-k][j] = k;

		for( i = n-k; i >= k-1; i-- )		// Left Column
			arr[i][k-1] = k;
	}


	/* Printing the matrix */
	for( i = 0; i < n; i++ ) {

		for( j = 0; j < n; j++ ) {
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
