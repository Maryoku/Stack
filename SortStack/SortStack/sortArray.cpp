#include "header.h"

void JoinTwoStackInThird(ArrayStack * st1, ArrayStack * st2, ArrayStack * st3)
{
	int elem;
	while (!IsEmptyArray(st1) || !IsEmptyArray(st2))
	{
		if (!IsEmptyArray(st1) && !IsEmptyArray(st2))
		{
			if (TopArray(st1) >= TopArray(st2))
				elem = PopArray(st1);
			else elem = PopArray(st2);
		}
		else if (!IsEmptyArray(st1))
			elem = PopArray(st1);
		else elem = PopArray(st2);

		PushArray(st3, elem);
	}
}

void sortArray(ArrayStack * st1, bool MaxToTop)
{
	//создаем три таких же по емкости стека 
	ArrayStack st2;
	ArrayStack st3;
	ArrayStack st4;

	initArrayStack(&st2);
	initArrayStack(&st3);
	initArrayStack(&st4);

	while (!IsEmptyArray(st1))
	{
		while (!IsEmptyArray(st1))
		{
			if (IsEmptyArray(&st2) || TopArray(&st2) <= TopArray(st1))
			{
				PushArray(&st2, PopArray(st1));
			}
			else if (IsEmptyArray(&st3) || TopArray(&st3) <= TopArray(st1))
			{
				PushArray(&st3, PopArray(st1));
			}
			else
			{
				JoinTwoStackInThird(&st2, &st3, &st4);
			}
		}

		if (IsEmptyArray(st1) && IsEmptyArray(&st4))
			break;
		else
			JoinTwoStackInThird(&st2, &st3, &st4);

		while (!IsEmptyArray(&st4))
		{
			PushArray(&st2, PopArray(&st4));
		}
		while (!IsEmptyArray(&st2))
		{
			PushArray(st1, PopArray(&st2));
		}

	}

	JoinTwoStackInThird(&st2, &st3, &st4);

	if (MaxToTop)
		while (!IsEmptyArray(&st4))
		{
			PushArray(st1, PopArray(&st4));
		}
	else
	{
		while (!IsEmptyArray(&st4))
		{
			PushArray(&st2, PopArray(&st4));
		}

		while (!IsEmptyArray(&st2))
		{
			PushArray(st1, PopArray(&st2));
		}
	}

}
