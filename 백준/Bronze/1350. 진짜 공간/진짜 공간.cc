#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, cluster;
	long long size = 0;
	cin >> n;
	int* files = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> files[i];
	}
	cin >> cluster;
	for (int i = 0; i < n; i++)
	{
		size += (files[i] / cluster) * cluster;
		if (files[i] % cluster) {
			size += cluster;
		}
	}
	cout << size;
	delete[] files;
	return 0;
}