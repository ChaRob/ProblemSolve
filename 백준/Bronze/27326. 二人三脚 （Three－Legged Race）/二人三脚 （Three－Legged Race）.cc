#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int* group = new int[n + 1] {};
	for (int i = 0; i < 2 * n - 1; i++)
	{
		int student;
		cin >> student;
		group[student]++;
	}
	for (int i = 1; i <= n; i++)
	{
		if (group[i] == 1)
		{
			cout << i;
			break;
		}
	}
	delete[] group;
	return 0;
}