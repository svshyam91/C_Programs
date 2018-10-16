/*
	Problem: Given n, print the pattern as shown below:-
	Ex: n = 6 ( Height of the pattern )

	6 5 4 3 2 1
	5 4 3 2 1
	4 3 2 1
	3 2 1
	2 1
	1

	Author: Shyam Kumar
	
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int n, i, j, temp, num;
	scanf("%d",&n);

		
	for( i = 0; i < n; i++ ) {

		temp = n-i;
		for( j = 0; j < n-i; j++ ) {
			
			printf("%d ",temp);
			temp--;
		}
		printf("\n");
	}
	return 0;
}
