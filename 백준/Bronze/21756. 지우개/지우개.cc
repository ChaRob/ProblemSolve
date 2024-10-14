#include <iostream>
#include <queue>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	queue<int> nowQue, proQue;
	for (int i = 0; i < n; i++)
	{
		nowQue.push(i + 1);
	}
	while (nowQue.size() > 1)
	{
		proQue = nowQue;
		nowQue = {};
		int size = proQue.size();
		for (int i = 0; i < size; i++)
		{
			int num = proQue.front();
			if (i & 1) {
				nowQue.push(num);
			}
			proQue.pop();
		}
	}
	cout << nowQue.front();
	return 0;
}