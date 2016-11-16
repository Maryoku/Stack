#include "node_header.h"

int IsEmptyNode(Node *head)
{
	if (head == NULL)
	{
		return SUCCESS;
	}
	else
	{
		return ERROR;
	}
}

int PushNode(Node **head, int elem)
{
	Node *tmp = new Node;
	if (tmp == NULL) return ERROR;
	tmp->next = *head;
	tmp->elem = elem;
	*head = tmp;
	return SUCCESS;
}

int TopNode(Node *head)
{
	if (IsEmptyNode(head) == SUCCESS)
	{
		return ERROR;
	}
	else
	{
		return head->elem;
	}
}

int PopNode(Node **head)
{
	// проверка на Empty
	if (IsEmptyNode(*head) == SUCCESS) {

		return ERROR;
	}
	else
	{
		Node *out;
		int elem;

		out = *head;
		*head = (*head)->next;
		elem = out->elem;
		delete out;
		return elem;
	}
}