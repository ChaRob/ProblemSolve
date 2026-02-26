#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int w;
		cin >> w;
		sum += w;
	}
	if (sum % 3 == 0)
		cout << "yes";
	else
		cout << "no";
	return 0;
}