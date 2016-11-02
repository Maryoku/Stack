#include "array_header.h"

// Инициализация стека
void initArrayStack(ArrayStack *stack) {
	stack->pointer = 0;
	stack->arr[stack->pointer] = NULL;
}

bool PushArray(ArrayStack *stack, int elem) {
	// Если стек переполнен
	if (IsFullArray(stack))
	{
		return ERROR;
	}
	else
	{
		stack->arr[stack->pointer] = elem;       // Включение элемента
		stack->pointer++;                       // Сдвиг указателя (номера элемента массива)
		return 1;
	}
}

int TopArray(ArrayStack *stack) {
	// Если стек пуст
	if (IsEmptyArray(stack))
		return 0;
	else
		return stack->arr[stack->pointer - 1];
}

int PopArray(ArrayStack *stack) {
	// Если стек пуст
	if (IsEmptyArray(stack)) {
		return 0;
	}
	else {
		int tmp = stack->arr[stack->pointer - 1];
		stack->arr[stack->pointer - 1] = 0;
		stack->pointer--;
		return tmp;
	}

}

bool IsEmptyArray(ArrayStack *stack) {
	if ((stack->pointer == 0) && (stack->arr[stack->pointer] == NULL))
		return 1;
	else
		return 0;
}

bool IsFullArray(ArrayStack *stack) {
	// Если стек заполнен
	if (stack->pointer == 99999)
		return 1;
	else
		return 0;
}