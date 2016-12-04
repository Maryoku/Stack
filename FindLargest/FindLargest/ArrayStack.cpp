#include "array_header.h"

// Инициализация стека
void initArrayStack(ArrayStack *stack) {
	stack->arr = new int[SIZE];
	stack->pointer = 0;
}

int PushArray(ArrayStack *stack, int elem) {
	// Если стек переполнен
	if (IsFullArray(stack))
	{
		return 0;
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
		stack->arr[stack->pointer - 1] = SUCCESS;
		stack->pointer--;
		return tmp;
	}

}

bool IsEmptyArray(ArrayStack *stack) {
	if (stack->pointer == 0)
		return 1;
	else
		return 0;
}

bool IsFullArray(ArrayStack *stack) {
	// Если стек заполнен
	if (stack->pointer == (SIZE - 1)) //max size - 1
		return 1;
	else
		return 0;
}