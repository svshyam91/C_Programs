/*
	Problem: Given n, print the pattern as shown below:-

	Ex: n = 7 ( Height of the pattern )

	1 2 3 4 5 6 7
	 2 3 4 5 6 7
	  3 4 5 6 7
	   4 5 6 7
	    5 6 7
	     6 7
	      7
	     6 7
	    5 6 7
	   4 5 6 7
	  3 4 5 6 7
	 2 3 4 5 6 7
	1 2 3 4 5 6 7

	Author: Shyam Kumar

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int n, i, j, temp, spaces;
	scanf("%d",&n);

	// For Upper Half

	/* For the 1st row, there are no spaces */
	spaces = 0;

	for( i = 0; i < n; i++ ) {			//Row  

		temp = i+1;

		for( j = 0; j < n; j++ ) {		// Column

			/* For printing spaces */
			if( j < spaces )
				printf(" ");

			/* For printing numbers */
			else {
				printf("%d ",temp);
				temp++;
			}
		}
		printf("\n");
		spaces++;
	}


	// For lower half

	spaces = n-2;
	/* Lower half has 1 less rows that's why loop runs from 0 to n-1 */
	for( i = 0; i < n-1; i++ ) {		 

		temp = n-i-1;		// For storing numbers 

		for( j = 0; j < n; j++ ) {

			if( j < spaces ) 
				printf(" ");
			else {
				printf("%d ",temp);
				temp++;
			}
		}
		printf("\n");
		spaces--;
	}
	return 0;
}
