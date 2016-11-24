#include "header.h"

void JoinTwoStackInThird(Node * &st1, Node * &st2, Node * &st3)
{
	int elem;
	while (!IsEmptyNode(st1) || !IsEmptyNode(st2))
	{
		if (!IsEmptyNode(st1) && !IsEmptyNode(st2))
			if (TopNode(st1) >= TopNode(st2))
				elem = PopNode(st1);
			else elem = PopNode(st2);
		else if (!IsEmptyNode(st1))
			elem = PopNode(st1);
		else elem = PopNode(st2);

		PushNode(st3, elem);
	}
}


void sortNode(Node * &st1, bool MaxToTop)
{
	Node * st2 = NULL;
	Node * st3 = NULL;
	Node * st4 = NULL;

	while (!IsEmptyNode(st1))
	{
		while (!IsEmptyNode(st1))
		{
			if (IsEmptyNode(st2) || TopNode(st2) <= TopNode(st1))
			{
				PushNode(st2, PopNode(st1));
			}
			else if (IsEmptyNode(st3) || TopNode(st3) <= TopNode(st1))
			{
				PushNode(st3, PopNode(st1));
			}
			else
			{
				JoinTwoStackInThird(st2, st3, st4);
			}


		}

		if (IsEmptyNode(st1) && IsEmptyNode(st4))
			break;
		else JoinTwoStackInThird(st2, st3, st4);

		while (!IsEmptyNode(st4))
		{
			PushNode(st2, PopNode(st4));
		}
		while (!IsEmptyNode(st2))
		{
			PushNode(st1, PopNode(st2));
		}

	}

	JoinTwoStackInThird(st2, st3, st4);

	if (MaxToTop)
		while (!IsEmptyNode(st4))
		{
			PushNode(st1, PopNode(st4));
		}
	else
	{
		while (!IsEmptyNode(st4))
		{
			PushNode(st2, PopNode(st4));
		}

		while (!IsEmptyNode(st2))
		{
			PushNode(st1, PopNode(st2));
		}
	}
}