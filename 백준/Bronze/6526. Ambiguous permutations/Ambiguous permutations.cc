#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	while (true)
	{
		int n;
		cin >> n;
		if (n == 0)
			break;
		vector<int> sq(n);
		for (int i = 0; i < n; i++)
		{
			cin >> sq[i];
		}
		bool check = true;
		for (int i = 0; i < n; i++)
		{
			if (i + 1 != sq[sq[i] - 1])
			{
				check = false;
				break;
			}
		}
		if (check)
			cout << "ambiguous\n";
		else
			cout << "not ambiguous\n";
	}
	return 0;
}