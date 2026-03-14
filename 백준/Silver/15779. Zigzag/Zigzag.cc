#include <iostream>
#include <deque>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n, cnt = 0;
	cin >> n;
	deque<int> dq;
	for (int i = 0; i < n; i++)
	{
		int val;
		cin >> val;
		dq.push_back(val);
		if (dq.size() < 3)
		{
			continue;
		}

		deque<int>::iterator it = dq.end();
		if ((*(it - 3) <= *(it - 2) && *(it - 2) <= *(it - 1)) ||
			(*(it - 3) >= *(it - 2) && *(it - 2) >= *(it - 1)))
		{
			while (dq.size() >= 3)
				dq.pop_front();
		}
		cnt = (cnt > dq.size()) ? cnt : dq.size();
	}
	cout << cnt;
	return 0;
}