#ifndef HEADER
#define HEADER

#pragma warning (disable: 4996)
#include <stdio.h>
#include <iostream>
#include <ctime>

typedef struct Node_tag
{
	int elem;
	struct Node_tag *next;
}Node;

bool IsEmptyNode(Node *head);
bool PushNode(Node **head, int elem);
int TopNode(Node *head);
int PopNode(Node **head);

#endif