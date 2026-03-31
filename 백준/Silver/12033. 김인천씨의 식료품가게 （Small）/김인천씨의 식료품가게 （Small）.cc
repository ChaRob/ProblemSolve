#include <iostream>
#include <queue>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 1; t <= T; t++)
	{
		int n;
		cin >> n;
		queue<int> que;
		cout << "Case #" << t << ": ";
		for (int i = 0; i < n * 2; i++)
		{
			int p;
			cin >> p;
			if (que.size() > 0 && p * 0.75 == que.front())
			{
				cout << que.front() << " ";
				que.pop();
			}
			else
				que.push(p);
		}
		cout << "\n";
	}
	return 0;
}