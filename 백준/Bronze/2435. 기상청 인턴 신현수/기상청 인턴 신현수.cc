#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, k;
	cin >> n >> k;
	int* temp = new int[n];
	int maxT = -999999;
	for (int i = 0; i < n; i++)
	{
		cin >> temp[i];
		if (i >= k - 1) {
			int sum = 0;
			for (int j = 0;j < k; j++)
			{
				sum += temp[i - j];
			}
			maxT = (maxT > sum) ? maxT : sum;
		}
	}
	cout << maxT;
	delete[] temp;
	return 0;
}