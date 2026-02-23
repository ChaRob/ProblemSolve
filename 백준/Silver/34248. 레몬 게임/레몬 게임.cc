#include <iostream>
#include <vector>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<int> tray;
	for (int i = 0; i < n; i++)
	{
		int lemon, sum = 0;
		cin >> lemon;
		tray.push_back(lemon);
		int size = tray.size();
		while (--size >= 0)
		{
			sum += tray[size];
			if (sum == 3)
			{
				for (int i = tray.size() - 1; i >= size; i--)
				{
					tray.pop_back();
				}
				break;
			}
			else if (sum > 3)
				break;
		}
	}
	if (tray.size() > 0)
		cout << "No";
	else
		cout << "Yes";
	return 0;
}