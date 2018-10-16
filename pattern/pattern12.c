/*
	Problem: Given n, print the pattern as shown below:-

	Ex: n = 5 ( Height of the pattern )

	12345
	1234
	123
	12
	1
	12
	123
	1234
	12345

	Author: Shyam Kumar

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int n, i, j, temp;
	scanf("%d",&n);

	/* 1st part */
	for( i = 0; i < n; i++ ) {
		
		temp = 1;
		for( j = n-i; j > 0; j-- ) {
			printf("%d",temp);
			temp++;
		}
		printf("\n");
	}

	/* 2nd Part */
	for( i = 1; i < n; i++ ) {
		temp = 1;
		for( j = i; j >= 0; j-- ) {
			printf("%d",temp);
			temp++;
		}
		printf("\n");
	}
	return 0;
}
