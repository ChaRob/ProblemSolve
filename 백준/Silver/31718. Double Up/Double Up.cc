#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, appear = 0;
	cin >> n;
	unordered_map<int, int> count;
	for (int i = 0; i < n; i++)
	{
		int val;
		cin >> val;
		while (val % 2 == 0) val /= 2;
		count[val]++;
		if (count[val] > appear)
			appear = count[val];
	}
	cout << appear;
	return 0;
}