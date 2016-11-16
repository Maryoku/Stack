#ifndef HEADER
#define HEADER

#pragma warning (disable: 4996)
#include <stdio.h>
#include <iostream>
#include <ctime>

#define SUCCESS 2147483647
#define ERROR -2147483647

typedef struct Node
{
	int elem;
	Node *next;
};

int IsEmptyNode(Node *head);
int PushNode(Node **head, int elem);
int TopNode(Node *head);
int PopNode(Node **head);

#endif