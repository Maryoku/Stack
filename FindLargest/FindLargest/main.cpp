#include "header.h"


int main()
{
	printf("Search in random value: ");
	FindLargestInFile("random.txt", "rand_out.txt");

	printf("Search in increasing value: ");
	FindLargestInFile("increasing.txt", "inc_out.txt");

	printf("Search in decreasing value: ");
	FindLargestInFile("decreasing.txt", "dec_out.txt");

    return 0;
}

