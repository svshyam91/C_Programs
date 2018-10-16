/*
	Problem: Given n, print the pattern as shown below:-

	Ex: n = 5 ( Height of the pattern )

	1111111
	1111122
	1111333
	1114444
	1155555
	1666666
	7777777
	
	Author: Shyam Kumar

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int n, i, j, temp = 1;
	scanf("%d",&n);

	for( i = 0; i < n; i++ ) {			// Row

		for( j = 0; j < n; j++ ) {		// Column

			if( n-j <= temp )
				printf("%d",temp);

			else
				printf("1");
		}
		printf("\n");
		temp++;
	}
	return 0;
}
