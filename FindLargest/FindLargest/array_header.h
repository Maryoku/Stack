#ifndef HEADER_ARRAY
#define HEADER_ARRAY

#pragma warning (disable: 4996)
#include <stdio.h>
#include <iostream>

#define SUCCESS 2147483647
#define ERROR -2147483646
#define SIZE 3000000

typedef struct
{
	int *arr;
	int pointer;         //указатель, используется для обращения к нек-му элементу массива
} ArrayStack;

//При создании статического массива, для указания его размера может использоваться только константа. 
//Размер выделяемой памяти определяется на этапе компиляции и не может изменяться в процессе выполнения.

void initArrayStack(ArrayStack *stack);
int PushArray(ArrayStack *stack, int elem);
int TopArray(ArrayStack *stack);
int PopArray(ArrayStack *stack);
bool IsEmptyArray(ArrayStack *stack);
bool IsFullArray(ArrayStack *stack);

#endif
