/*
	Problem: Given n, print the pattern as shown below:-
	Ex: n = 5 ( Height of the pattern )

	5 4 3 2 1 2 3 4 5
	4 3 2 1 2 3 4
	3 2 1 2 3
	2 1 2
	1

	Author: Shyam Kumar
	
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int n, i, j, cols, num;
	scanf("%d",&n);

	/* For columns */
	cols = 2*n-1;
	for( i = 0; i < n; i++ ) {

		num = n-i;
		for( j = 0; j < cols; j++ ) {
			
			if( j < n-i ) {
				printf("%d ",num);
				num--;
			}
			else
				printf("%d ",(j-(n-2)+i));
		}
		cols = cols-2;
		printf("\n");
	}
	return 0;
}
