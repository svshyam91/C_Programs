/*
	Problem: Given n, print the pattern as shown below:-

	Ex: n = 5 ( Height of the pattern )

* * * * *
 * * * *
  * * * 
   * * 
    * - - - - - *
    		   * *
    		  * * *
    		 * * * *
    		* * * * *

	Author: Shyam Kumar

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int space = 0, i, j, n, k;
	scanf("%d",&n);
	for(i=0; i < n; i++ ) { 	/* This loop is for rows */

		/* If you notice, the number of spaces in each row is 
		equal to the value of i */
		space=i;

		for(j=0; j < n; j++) { /* This loop is for column */
			if(space > 0) {	/* First print the space */
				printf(" ");
				space--;	/* With every column, decrease the number of space */
			}
			else
				printf("* ");
		}

		/* Print newline after every row but not after last row(n-1) */
		if(i != n-1) 
			printf("\n");
	}
	/* For printing the spaces */
	for(i=0; i < n; i++)
		printf("-");

	
	/* For printing the lower triangle */

	/* 1st row of lower triangle. We are printing this row 
		seperately, because in other rows we have to print 
		space but in this row we don't have to print any space */
	printf("*\n");

	/* i=1, because for lower triangle, we have already 
		printed 1 row above. So, we are left with with only
		4 rows. That's why i starts from 1. */
	for(i=1; i<n; i++) {

		/* This loop is used to shift the lower triangle to the right. 
			If we calculate, we will find there are n+2 spaces extra for 
			lower triangle.*/
		for(k=0; k <= n+1; k++)
			printf(" ");

		/* If we find the pattern of spaces, we will get below formula */
		space = n-i-1;

		/* This loop is for columns */
		for(j=0; j<n; j++) {
			if(space>0) { /* First print the space */
				printf(" ");
				space--; /* With every column, decrease the number of space */
			}
			else
				printf("* ");
		}
		printf("\n");
	}
	return 0;
}