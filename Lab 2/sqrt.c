/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Script to compute square root
int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
	if(input<0)
		printf("Sqrt of %d (negative number) is %fi\n",input,sqrt(-1*input));
	else
		printf("Sqrt of %d is %f\n",input,sqrt(input));
	printf("End of program. Exiting");
	return(0);

} // end main
