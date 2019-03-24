#ifndef ALGORITHMS_LAMBDAS_H
#define ALGORITHMS_LAMBDAS_H

#include <iostream>
#include <string>
#include <array>
#include <algorithm>

using namespace std;

struct Algorithm_Lambda
{
	void main();

	int pyramidBase = 9, pyramidIn = 0, pyramidOut = 0;
	array<char, 81> pyramid;
};

#endif // !ALGORITHMS_LAMBDAS_H