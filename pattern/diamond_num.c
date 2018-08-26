/*
	Problem: Given n(odd), print the pattern as shown below:-

	Ex: n = 5 ( Height of the pattern )
					1
				2		4
			3		5		7
				6		8
					9
	
	Author: Shyam Kumar


*/


/* Filling of numbers: The numbers are filled diagonally from 
	top-right to bottom left 

*/

#include <stdio.h>
#include <stdlib.h>

void diamond_num( int n ) {
	int i, j, d, fill_count, pos_start, num_start, num, space;

	/* d gives the diff. b/w the numbers in a row */
	d = (n-1)/2;

	/* pos_start gives the position from where filling of numbers
		is to be started */
	pos_start = n / 2;

	/* This loop is for the rows and it prints ((n/2) + 1) rows */
	for( i = 0; i < d+1; i++ ) {

		/* fill_count gives the info about number of elements to 
			be filled */
		fill_count = i+1; space = 0;

		/* num gives the info about the element to be filled */
		num = i + 1;

		/* This loop is for the columns and it prints n columns */
		for( j = 0; j < n; j++ ) {

			/* If the column index is less then the position where 
				element is to be inserted, then insert space */
			if( j < pos_start ) 
				printf("  ");	// 2 spaces

			/* If the col. index is >= to the position where the 
				element is to be inserted, then proceed further */
			else {

				/* If required number of elements in a row is not 
					filled then insert the numbers */ 
				if( fill_count ) {

					/* If space is true then insert space */
					if( space ) {
						printf("   ");
						space = 0;
					}

					/* If space is not true then insert element */
					else {
						printf("%d",num);
						space = 1;

						/* Since an element is inserted so fill_count
							if decreased */
						fill_count--;

						/* Next number to be inserted is calculated
							as below */
						num = num + n/2;
					}
				}

				/* If required number of elements in a row
					are filled then insert space */
				else {
					printf("  ");	// 2 Spaces
				}
			}
		}
		/* Decrease the start position of the element for the 
			next row */
		pos_start--;
		printf("\n");
	}

	/* From row number (n/2 + 2) to n */

	/* The first element in the (n/2 + 2)th row is calculated 
		as below */
	num_start = i * 2;

	/* The position at which the 1st elem. is to be inserted
		in (n/2 + 2)th row is 1 */
	pos_start = 1;

	/* This loop is for rows */
	for( i = d+1; i < n; i++ ) {

		space = 0; num = num_start;
		fill_count = n- i;

		/* This loop is for columns */
		for( j = 0; j < n; j++ ) {
			if(j < pos_start )
				printf("  ");	// 2 spaces
			else {
				if( fill_count ) {
					if( space ) {

						/* For better visualization 3 spaces are 
							inserted */
						printf("   ");
						space = 0;
					}
					else {
						printf("%d",num);
						space = 1;
						fill_count--;
						num = num + n/2;
					}
				}
				else {
					printf("  ");	// 2 spaces
				}
			}
		}
		/* Position of the 1st element in the next row */
		pos_start++;
		printf("\n");

		/* 1st element to be inserted in the next row  is 
			calculated as below*/
		num_start = num_start + (d+1);
	}

	return;
}

int main(int argc, char const *argv[])
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	diamond_num(n);
	return 0;
}

