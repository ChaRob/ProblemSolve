#include<iostream>
#include<queue>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int N, L;
	cin >> N >> L;
	priority_queue<pair<int,int>> que;
	for (int i = 0; i < N; i++)
	{
		int value;
		cin >> value;
		que.push(make_pair(-value, i));
		while (!que.empty() && que.top().second <= i - L) {
			que.pop();
		}
		cout << -que.top().first << " ";
	}

	return 0;
}