#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <iostream>
#include <ctime>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <conio.h>
#include <fstream>
#include "array_header.h"
#include "node_header.h"

using namespace std;

void JoinTwoStackInThird(ArrayStack * st1, ArrayStack * st2, ArrayStack * st3);
void sortArray(ArrayStack * st1, bool MaxToTop = true);

void JoinTwoStackInThird(Node * &st1, Node * &st2, Node * &st3);
void sortNode(Node * &st1, bool MaxToTop = true);

#endif
