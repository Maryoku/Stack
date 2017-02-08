#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <fstream>
#include <string>
#include "array_header.h"
//#include "node_header.h"

using namespace std;

struct Pair
{
	int num;
	int largest;
};

void FindLargestInFile(string fname, string outfname);

#endif
