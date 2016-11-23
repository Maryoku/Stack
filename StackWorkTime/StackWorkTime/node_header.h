#ifndef HEADER_NODE
#define HEADER_NODE

#include <stdio.h>
#include <iostream>

struct Node
{
	int elem;
	Node *next;
};

bool IsEmptyNode(Node* &head);
int PushNode(Node* &head, int elem);
int TopNode(Node* &head);
int PopNode(Node* &head);

#endif
