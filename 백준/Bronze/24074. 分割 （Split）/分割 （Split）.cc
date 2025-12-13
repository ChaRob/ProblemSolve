#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n, maxIdx = 0, maxVal = 0;
	cin >> n;
	vector<int> array(n);
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
		if (maxVal < array[i])
		{
			maxVal = array[i];
			maxIdx = i;
		}
	}
	int maxPrevSum = 0, maxNextSum = 0;
	for (int i = 0; i < n; i++)
	{
		if (i < maxIdx)
			maxPrevSum += array[i];
		else if (i > maxIdx)
			maxNextSum += array[i];
	}
	cout << maxPrevSum << "\n" << maxNextSum;
	return 0;
}