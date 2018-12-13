#pragma once
#include <vector>
class Production
{
public:
	Production();
	~Production();
	std::vector<int>AskInput(int amount);
	bool Test(std::vector<int>);
};