#include "header.h"

int Random() {
	return rand() % 4;
}

int main()
{
	unsigned int start_time;
	unsigned int  end_time;
	unsigned int search_time;

	ArrayStack arr;
	Node *head = NULL;

	initArrayStack(&arr);

	vector <int> testRandom(magicNumber);

	generate(testRandom.begin(), testRandom.end(), Random);

	printf("ArrayStack:\n");

	start_time = clock();
	for (int i = 0; i < magicNumber; i++) {
		if (testRandom[i] == 0)
			PushArray(&arr, (rand() % 200000000));
		else if (testRandom[i] == 1)
			TopArray(&arr);
		else if (testRandom[i] == 2)
			IsEmptyArray(&arr);
		else PopArray(&arr);
	}
	end_time = clock();
	search_time = end_time - start_time;
	printf("Random: %d\n", search_time);

	start_time = clock();
	for (int i = 0; i < magicNumber; i++) {
		PushArray(&arr, (rand() % 200000000));
	}
	end_time = clock();
	search_time = end_time - start_time;
	printf("Push: %d\n", search_time);

	start_time = clock();
	for (int i = 0; i < magicNumber; i++) {
		TopArray(&arr);
	}
	end_time = clock();
	search_time = end_time - start_time;
	printf("Top: %d\n", search_time);

	start_time = clock();
	for (int i = 0; i < magicNumber; i++) {
		PopArray(&arr);
	}
	end_time = clock();
	search_time = end_time - start_time;
	printf("Pop: %d\n", search_time);

	printf("\nNodeStack:\n");

	start_time = clock();
	for (int i = 0; i < magicNumber; i++)
	{
		if (testRandom[i] == 0)
			PushNode(head, rand() % 200000000);
		else if (testRandom[i] == 1)
			TopNode(head);
		else if (testRandom[i] == 2)
			IsEmptyNode(head);
		else PopNode(head);
	}
	end_time = clock();
	search_time = end_time - start_time;
	printf("Random: %d\n", search_time);

	start_time = clock();
	for (int i = 0; i < magicNumber; i++) {
		PushNode(head, rand() % 200000000);
	}
	end_time = clock();
	search_time = end_time - start_time;
	printf("Push: %d\n", search_time);

	start_time = clock();
	for (int i = 0; i < magicNumber; i++) {
		TopNode(head);
	}
	end_time = clock();
	search_time = end_time - start_time;
	printf("Top: %d\n", search_time);

	start_time = clock();
	for (int i = 0; i < magicNumber; i++) {
		PopNode(head);
	}
	end_time = clock();
	search_time = end_time - start_time;
	printf("Pop: %d\n", search_time);
}
