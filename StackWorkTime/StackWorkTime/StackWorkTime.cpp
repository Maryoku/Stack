#include "header.h"

int main()
{
	ArrayStack arr;

	Node *head = NULL;

	std::vector<int> testRandom(magicNumber);
	std::vector<int> testPushPop(magicNumber);
	std::vector<int> testTopIsEmpty(magicNumber);

	initArrayStack(&arr);

	std::generate(testRandom.begin(), testRandom.end(), Random);

	for (int i = 0; i < magicNumber / 2; i++) {
		testPushPop[i] = genPush;
	}
	for (int i = magicNumber / 2; i < magicNumber; i++) {
		testPushPop[i] = genPop;
	}

	std::generate(testTopIsEmpty.begin(), testTopIsEmpty.end(), TopIsEmpty);

	printf("ArrayStack\n");

	int testElem;
	unsigned int start_time;
	unsigned int end_time;
	unsigned int search_time;

	start_time = clock();
	for (int i = 0; i < magicNumber; i++) {
		testElem = testRandom[i];
		if (testElem == genPush)
			PushArray(&arr, (rand() % 200000000));
		else if (testElem == genTop)
			TopArray(&arr);
		else if (testElem == genIsEmpty)
			IsEmptyArray(&arr);
		else if (testElem == genIsFull)
			IsFullArray(&arr);
		else PopArray(&arr);
	}
	end_time = clock();
	search_time = end_time - start_time;
	printf("Random: %d\n", search_time);

	start_time = clock();
	for (int i = 0; i < magicNumber; i++) {
		testElem = testPushPop[i];
		if (testElem == genPush)
			PushArray(&arr, (rand() % 200000000));
		else PopArray(&arr);
	}
	end_time = clock();
	search_time = end_time - start_time;
	printf("Push Pop: %d\n", search_time);

	start_time = clock();
	for (int i = 0; i < magicNumber; i++) {
		testElem = testTopIsEmpty[i];
		if (testElem == genTop)
			TopArray(&arr);
		else IsEmptyArray(&arr);
	}
	end_time = clock();
	search_time = end_time - start_time;
	printf("Top IsEmpty: %d\n", search_time);


	printf("\nListStack\n");

	start_time = clock();
	for (int i = 0; i < magicNumber; i++) {
		testElem = testRandom[i];
		if (testElem == genPush)
			PushNode(&head, (rand() % 200000000));
		else if (testElem == genTop)
			TopNode(head);
		else if (testElem == genIsEmpty)
			IsEmptyNode(head);
		else PopNode(&head);
	}
	end_time = clock();
	search_time = end_time - start_time;
	printf("Random: %d\n", search_time);

	start_time = clock();
	for (int i = 0; i < magicNumber; i++) {
		testElem = testPushPop[i];
		if (testElem == genPush)
			PushNode(&head, (rand() % 200000000));
		else PopNode(&head);
	}
	end_time = clock();
	search_time = end_time - start_time;
	printf("Push Pop: %d\n", search_time);

	start_time = clock();
	for (int i = 0; i < magicNumber; i++) {
		testElem = testTopIsEmpty[i];
		if (testElem == genTop)
			TopNode(head);
		else IsEmptyNode(head);
	}
	end_time = clock();
	search_time = end_time - start_time;
	printf("Top IsEmpty: %d\n", search_time);

	return 0;
}

