/*
	Problem: Given n, print the pattern as shown below:-

	Ex: n = 5 ( Height of the pattern )

	1
	2 1 2
	3 2 1 2 3
	4 3 2 1 2 3 4
	5 4 3 2 1 2 3 4 5
	
	Author: Shyam Kumar

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int n, i, j, temp, num;
	scanf("%d",&n);

	/* temp is used for column loop because column loop runs for odd
		number of times */
	temp = 0;
	for( i = 0; i < n; i++ ) {

		/* num is used for printing the decreasing numbers */
		num = i+1;

		for( j = 0; j <= temp; j++ ) {
			
			/* For decreasing numbers */
			if( j <= i ) {
				printf("%d ", num);
				num--;
			}

			/* For increasing numbers */
			else 
				printf("%d ", j-(i-1));
		}
		printf("\n");
		temp = temp + 2;
	}
	return 0;
}
