#include "header.h"

int main()
{
	unsigned int start_time;
	unsigned int  end_time;
	unsigned int search_time;

	ArrayStack arr;
	Node *head = NULL;

	initArrayStack(&arr);

	ifstream fileStream("data.txt");

	for (int i = 0; i < 50000; i++)
	{
		int elem;
		fileStream >> elem;
		PushArray(&arr, elem);
		PushNode(head, elem);
	}

	start_time = clock();

	sortArray(&arr);

	end_time = clock();
	search_time = end_time - start_time;
	printf("ArrayStack sort: %d\n", search_time);

	/**************/

	start_time = clock();

	sortNode(head);

	end_time = clock();
	search_time = end_time - start_time;
	printf("ListStack sort: %d\n", search_time);

    return 0;
}

