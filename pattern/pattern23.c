/*
	Problem: Given n, print the pattern as shown below:-

	Ex: n = 5 ( Height of the pattern )

	A
	B C
	D E F
	G H I J
	K L M N O
	
	Author: Shyam Kumar

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int n, i, j;
	char temp;
	scanf("%d",&n);

	temp = 65;
	for( i = 0; i < n; i++ ) {
		for( j = 0; j <= i; j++ ) {
			printf("%c ",temp);
			temp++;
		}
		printf("\n");
	}
	return 0;
}
