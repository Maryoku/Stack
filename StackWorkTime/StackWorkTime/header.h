#ifndef HEADER
#define HEADER

#pragma warning (disable: 4996)
#include <stdio.h>
#include <iostream>
#include <ctime>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include "array_header.h"
#include "node_header.h"

#define genPush 0
#define genTop 1
#define genIsEmpty 2
#define genIsFull 3
#define genPop 4

const int magicNumber = 10000000;

using namespace std;

int Random();
int TopIsEmpty();

#endif
