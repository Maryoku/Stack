#include "header.h"

void FindLargestInFile(string fname, string outfname)
{
	unsigned int start_time;
	unsigned int end_time;
	unsigned int search_time;

	ArrayStack stack;
	initArrayStack(&stack);

	vector<Pair> outs;

	int * numbers = new int[SIZE];
	int prev, current;

	ifstream fileStream(fname);
	ofstream outp(outfname);

	for (int i = 0; i < SIZE; i++) {
		int v;
		fileStream >> v;
		numbers[i] = v;
	}

	start_time = clock();

	prev = numbers[0];

	for (int i = 1; i < SIZE; ++i) {
		current = numbers[i];

		if (prev >= current) {
			PushArray(&stack, prev); // если пред >= послед - запушить в стек
		}
		else {
			Pair p; 
			p.num = prev;
			p.largest = current;
			outs.push_back(p);

			// проверка есть ли в стеке числа для кот-ых нынешнее наибольшее также будет наибольшим
			while (!IsEmptyArray(&stack)) {
				int old = TopArray(&stack);
				
				if (old >= current) {
					break;
				}
				else {
					old = PopArray(&stack);
					p.num = old;
					p.largest = current;
					outs.push_back(p);
				}
			}
		}

		prev = current;
	}

	delete[] numbers;

	// добавление в вектор чисел для кот-ых не найдено наибольшее
	while (!IsEmptyArray(&stack)) {
		Pair p;
		p.num = PopArray(&stack);
		p.largest = -1;
		outs.push_back(p);
	}


	end_time = clock();
	search_time = end_time - start_time;
	printf("%d\n", search_time);

	// output in file
	for (unsigned int i = 0; i < outs.size(); i++) {
		Pair pr = outs[i];
		outp << pr.num << "\t-\t" << pr.largest << std::endl;
	}

	outp.close();

}