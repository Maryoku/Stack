#include "array_header.h"

// Инициализация стека
void initArrayStack(ArrayStack *stack) {
	stack->pointer = 0;
	stack->arr[stack->pointer] = NULL;
}

int PushArray(ArrayStack *stack, int elem) {
	// Если стек переполнен
	if (IsFullArray(stack) == SUCCESS)
	{
		return ERROR;
	}
	else
	{
		stack->arr[stack->pointer] = elem;       // Включение элемента
		stack->pointer++;                       // Сдвиг указателя (номера элемента массива)
		return SUCCESS;
	}
}

int TopArray(ArrayStack *stack) {
	// Если стек пуст
	if (IsEmptyArray(stack) == SUCCESS)
		return ERROR;
	else
		return stack->arr[stack->pointer - 1];
}

int PopArray(ArrayStack *stack) {
	// Если стек пуст
	if (IsEmptyArray(stack) == SUCCESS) {
		return ERROR;
	}
	else {
		int tmp = stack->arr[stack->pointer - 1];
		stack->arr[stack->pointer - 1] = SUCCESS;
		stack->pointer--;
		return tmp;
	}

}

int IsEmptyArray(ArrayStack *stack) {
	if ((stack->pointer == 0) && (stack->arr[stack->pointer] == NULL))
		return SUCCESS;
	else
		return ERROR;
}

int IsFullArray(ArrayStack *stack) {
	// Если стек заполнен
	if (stack->pointer == (SIZE - 1)) //max size - 1
		return SUCCESS;
	else
		return ERROR;
}