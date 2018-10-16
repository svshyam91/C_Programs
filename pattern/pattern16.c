/*
	Problem: Given n, print the pattern as shown below:-

	Ex: n = 5 ( Height of the pattern )

	1
	1 0
	1 0 1
	1 0 1 0
	1 0 1 0 1

	Author: Shyam Kumar

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int n, i, j, temp, num;
	scanf("%d",&n);

	/* Logic: Print 1 for even places of j and 0 for odd places of j 
				in each row */
	
	for( i = 0; i < n; i++ ) {
		for( j = 0; j <= i; j++ ) {
			
			if( j % 2 == 0 )
				printf("1 ");
			else 
				printf("0 ");
		}
		printf("\n");
	}
	return 0;
}
