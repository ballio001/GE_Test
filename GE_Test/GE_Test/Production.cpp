#include "../../Application/Production.h"
#include <iostream>
#include <iterator>
#include <vector>
#include <sstream>
#include <assert.h>

Production::Production()
{
	//Test(AskInput(6));
}

Production::~Production()
{
}

std::vector<int> Production::AskInput(int amount) {
	std::cout << "Write " << amount << " numbers between 1 and 46\n";

	char* tempChar; std::string s;
	std::getline(std::cin, s);
	std::istringstream is(s);
	std::vector<int> v((std::istream_iterator<int>(is)), std::istream_iterator<int>());
	for (int x : v) std::cout << x << ' ';
	std::cout << std::endl;
	if (v.size() > 6)
		v.resize(amount);
	return v;
}

bool Production::Test(std::vector<int> numbers) {

	assert(numbers.size() == 6);
	for (int i = 0; i < numbers.size(); i++)
	{
		assert(numbers[i] > 0 && numbers[i] < 46);
		for (int j = 0; j < numbers.size(); j++)
		{
			if (i != j)
				assert(numbers[i] != numbers[j]);
		}
	}
	return true;
}
