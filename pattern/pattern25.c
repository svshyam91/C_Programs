/*
	Problem: Given n, print the pattern as shown below:-

	Ex: n = 5 ( Height of the pattern )

	1
	01
	101
	0101
	10101
	010101
	
	Author: Shyam Kumar

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int n, i, j;
	scanf("%d",&n);

	for( i = 0; i < n; i++ ) {
		for( j = 0; j <= i; j++ ) {
			if( (i+j) % 2 == 0 )
				printf("1");
			else
				printf("0");
		}
		printf("\n");
	}
	return 0;
}
