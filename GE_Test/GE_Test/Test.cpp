#include <assert.h>
#include <vector>
#include <iostream>
#include "../../Application/Production.h"

using namespace std;
int main()
{
	Production p;

	vector<int> t1{ 1, 6, 22, 12, 15, 19 };
	vector<int> t2{ 1, 1, 22, 12, 15, 19 };
	vector<int> t3{ 1, 6, 22, 12, 55, 19 };
	vector<int> t4{ 1, 6, 22, 12, 'a', 19 };
	vector<int> t5{ 1, 6, 22, 12, 15, 19, 4 };

	if (p.Test(t1)) { cout << "Test 1 succesful" << endl; }
	if (p.Test(t2)) { cout << "Test 2 succesful" << endl; }
	if (p.Test(t3)) { cout << "Test 3 succesful" << endl; }
	if (p.Test(t4)) { cout << "Test 4 succesful" << endl; }
	if (p.Test(t5)) { cout << "Test 5 succesful" << endl; }
}