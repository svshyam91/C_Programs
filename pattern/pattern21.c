/*
	Problem: Given n, print the pattern as shown below:-

	Ex: n = 5 ( Height of the pattern )

	1
	232
	34543
	4567654
	567898765

	Author: Shyam Kumar

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int n, i, j, temp, num, temp2;
	scanf("%d",&n);

	temp = 0;
	for( i = 0; i < n; i++ ) {

		/* num is used for starting the number*/
		num = i+1;

		/* temp2 is used for decreasing the number in each row */
		temp2 = 2;

		for( j = 0; j <= temp; j++ ) {

			/* Printing the increasing number */
			if( j <= temp/2 ) 
				printf("%d",num);

			/* Printing the decreasing number */
			else {
				printf("%d", num-temp2 );
				temp2 = temp2 + 2;
			}

			num++;
		}

		temp = temp+2;
		printf("\n");
	}
	return 0;
}
