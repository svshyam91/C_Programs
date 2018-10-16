/*
	Problem: Given n, print the pattern as shown below:-

	Ex: n = 5 ( Height of the pattern )

	1
	2 6
	3 7 10
	4 8 11 13
	5 9 12 14 15

	Author: Shyam Kumar

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int n, i, j, temp, num;
	scanf("%d",&n);

	for( i = 0; i < n; i++ ) {

		/* temp is used for the difference between numbers along the columns
			which starts from n-1 */
		temp = n-1;

		/* num is used for the starting number for each row */
		num = i+1;

		for( j = 0; j <= i; j++ ) {
			
			printf("%d ",num);
			num = num + temp;
			temp--;
		}

		printf("\n");
	}
	return 0;
}
