/*
	Problem: Given n, print the pattern as shown below:-

	Ex: n = 5 ( Height of the pattern )

	1234554321
	12344321
	123321
	1221
	11

	Author: Shyam Kumar

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int n, i, j, temp;
	scanf("%d",&n);

	for( i = n; i >= 1; i-- ) {

		temp = 1;
		for( j = 1; j <= i*2; j++ ) {

			if( j <= i )
				printf("%d",j);
			else {
				printf("%d",j-temp);
				temp = temp + 2;
			}
		}
		printf("\n");
	}
	return 0;
}
