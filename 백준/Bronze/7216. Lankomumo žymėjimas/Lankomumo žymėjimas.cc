#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, k, target = 0, lastInvite;
	cin >> n >> k;
	vector<int> students(n);
	for (int i = 0; i < n; i++)
	{
		cin >> students[i];
		if (students[i] == k)
			target = i;
	}
	for (int i = 0; i < n; i++)
	{
		lastInvite = students[target];
		target = students[target] - 1;
	}
	cout << lastInvite;
	return 0;
}