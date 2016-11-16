#ifndef HEADER
#define HEADER

#pragma warning (disable: 4996)
#include <stdio.h>
#include <iostream>
#include <ctime>

#define SUCCESS 2147483647
#define ERROR -2147483646
#define SIZE 100000

typedef struct
{
	int arr[SIZE];
	int pointer;         //указатель, используется для обращения к нек-му элементу массива
} ArrayStack;

//При создании статического массива, для указания его размера может использоваться только константа. 
//Размер выделяемой памяти определяется на этапе компиляции и не может изменяться в процессе выполнения.

void initArrayStack(ArrayStack *stack);
int PushArray(ArrayStack *stack, int elem);
int TopArray(ArrayStack *stack);
int PopArray(ArrayStack *stack);
int IsEmptyArray(ArrayStack *stack);
int IsFullArray(ArrayStack *stack);

#endif