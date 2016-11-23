#include "node_header.h"

int main()
{
	Node *head = NULL;

	printf("NodeStack\n");
	printf("%d\n", IsEmptyNode(head));
	printf("%d\n", PushNode(head, 5));
	printf("%d\n", PushNode(head, 10));
	printf("%d\n", PushNode(head, 15));
	printf("%d\n", PushNode(head, 20));
	printf("%d\n", PushNode(head, 25));
	printf("%d\n", PopNode(head));
	printf("%d\n", TopNode(head));
	printf("%d\n", PopNode(head));
	printf("%d\n", IsEmptyNode(head));
}