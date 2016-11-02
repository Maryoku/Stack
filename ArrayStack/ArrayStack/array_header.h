#ifndef HEADER
#define HEADER

#pragma warning (disable: 4996)
#include <stdio.h>
#include <iostream>
#include <ctime>

typedef struct
{
	int arr[100000];
	int pointer;         //указатель, используется для обращения к нек-му элементу массива
} ArrayStack;

const int ERROR = 0;

void initArrayStack(ArrayStack *stack);
bool PushArray(ArrayStack *stack, int elem);
int TopArray(ArrayStack *stack);
int PopArray(ArrayStack *stack);
bool IsEmptyArray(ArrayStack *stack);
bool IsFullArray(ArrayStack *stack);

#endif