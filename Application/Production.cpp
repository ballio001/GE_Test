#include "Production.h"
#include <iostream>
#include <iterator>
#include <sstream>
#include <assert.h>

using namespace std;

Production::Production()
{
}

Production::~Production()
{
}

vector<int> Production::AskInput(int amount) {
	cout << "Write " << amount << " numbers between 1 and 46\n";

	string s;
	getline(cin, s);
	istringstream is(s);
	vector<int> v((istream_iterator<int>(is)), istream_iterator<int>());
	for (int x : v) cout << x << ' ' << endl;
	if (v.size() > 6)
		v.resize(amount);
	return v;
}

bool Production::Test(vector<int> numbers) {

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