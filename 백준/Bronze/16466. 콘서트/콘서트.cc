#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<int> tickets(n);
	for (int i = 0; i < n; i++)
	{
		cin >> tickets[i];
	}
	sort(tickets.begin(), tickets.end());
	int target = 1, idx = 0;
	while (true)
	{
		if (target < tickets[idx])
			break;
		else if (idx < tickets.size() && target == tickets[idx])
		{
			target++;
			idx++;
		}
	}
	cout << target;
	return 0;
}