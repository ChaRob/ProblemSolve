#include<iostream>
using namespace std;

bool isValid[101];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int w, p;
	cin >> w >> p;
	int* partitions = new int[p + 2];
	partitions[0] = 0;
	partitions[p + 1] = w;
	for (int i = 1; i <= p; i++)
	{
		cin >> partitions[i];
	}

	for (int i = p + 1; i >= 1; i--)
	{
		for (int j = i - 1; j >= 0; j--)
		{
			isValid[partitions[i] - partitions[j]] = true;
		}
	}

	for (int i = 1; i <= w; i++)
	{
		if (isValid[i]) cout << i << " ";
	}
	delete[] partitions;
	return 0;
}