#include "algorithms_lambdas.h"

array<char, 3> checkEnd = { '.', '!', '?' };
array<char, 2> checkCommaPeriod = { '.', ',' };

// lambdas
auto periodCommaLambda = [](char check) {return find(begin(checkCommaPeriod), end(checkCommaPeriod), check) != end(checkCommaPeriod); };
auto sentenceLambda = [](char check) {return find(begin(checkEnd), end(checkEnd), check) != end(checkEnd); };

void Algorithm_Lambda::main()
{
	string str = "Short Giraffe by Cup O' Joe Studios! RV Punch by MilkShed Games. Uh oh, which is better?";

	// count number of "sentences"
	int count = count_if(str.begin(), str.end(), sentenceLambda);

	// replaces periods and commas with '$'
	replace_if(str.begin(), str.end(), periodCommaLambda, '$');

	cout << "Number of sentences: " << count << "\n";
	cout << str << "\n";

	/*
	// fill an array with a pyramid of '*'
	fill(begin(pyramid), end(pyramid), ' ');
	auto iter = begin(pyramid);
	bool tmp = false;
	while (iter != end(pyramid) - pyramidBase)
	{
	fill_n(iter + pyramidIn + pyramidIn, pyramidBase - pyramidOut, '*');
	if (tmp)
	pyramidIn++;
	else
	pyramidOut++;
	tmp = !tmp;
	iter += pyramidBase;
	}

	// output the '*' array
	for (unsigned int i = 0; i < pyramid.size(); ++i)
	{
	cout << pyramid[i];
	if ((i + 1) % 9 == 0)
	{
	cout << "\n";
	}
	}
	*/
}