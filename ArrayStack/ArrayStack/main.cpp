#include "array_header.h"

int main()
{
	ArrayStack arr;

	initArrayStack(&arr);

	printf("ArrayStack\n");

	printf("%d\n", IsEmptyArray(&arr));
	printf("%d\n", IsFullArray(&arr));
	printf("%d\n", PushArray(&arr, 5));
	printf("%d\n", PushArray(&arr, 10));
	printf("%d\n", PushArray(&arr, 15));
	printf("%d\n", PushArray(&arr, 20));
	printf("%d\n", PushArray(&arr, 25));
	printf("%d\n", PopArray(&arr));
	printf("%d\n", TopArray(&arr));
	printf("%d\n", PopArray(&arr));
	printf("%d\n", IsEmptyArray(&arr));
	printf("%d\n", IsFullArray(&arr));

	return 0;
}