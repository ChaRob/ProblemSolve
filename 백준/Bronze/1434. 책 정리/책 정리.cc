#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	vector<int> boxes(n);
	vector<int> nowWeight(n);
	for (int i = 0; i < n; i++)
	{
		cin >> boxes[i];
		nowWeight[i] = 0;
	}
	int index = 0, waist = 0;
	for (int i = 0; i < m; i++)
	{
		int book;
		cin >> book;
		while (nowWeight[index] + book > boxes[index])
			index++;
		nowWeight[index] += book;
	}
	for (int i = 0; i < n; i++)
	{
		waist += boxes[i] - nowWeight[i];
	}
	cout << waist;
	return 0;
}