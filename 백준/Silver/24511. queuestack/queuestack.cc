#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, tmp;
	cin >> n;
	vector<int> list;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		list.push_back(tmp);
	}
	deque<int> deque;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		if (list[i] == 0) {
			deque.push_front(tmp);
		}
	}
	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> tmp;
		deque.push_back(tmp);
		cout << deque.front() << " ";
		deque.pop_front();
	}
	return 0;
}