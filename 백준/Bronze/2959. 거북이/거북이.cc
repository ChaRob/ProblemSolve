#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int tmp;
	vector<int> steps;
	for (int i = 0; i < 4; i++)
	{
		cin >> tmp;
		steps.push_back(tmp);
	}
	sort(steps.begin(), steps.end());
	cout << steps[0] * steps[2];
	return 0;
}