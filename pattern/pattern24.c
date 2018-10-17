/*
	Problem: Given n, print the pattern as shown below:-

	Ex: n = 5 ( Height of the pattern )

	2
	2 4
	2 4 6
	2 4 6 8
	2 4 6 8 10
	2 4 6 8 10 12
	
	Author: Shyam Kumar

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int n, i, j, temp;
	scanf("%d",&n);

	for( i = 0; i < n; i++ ) {
		temp = 2;
		for( j = 0; j <= i; j++ ) {
			printf("%d ",temp);
			temp = temp+2;
		}
		printf("\n");
	}
	return 0;
}
