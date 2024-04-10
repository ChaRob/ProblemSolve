#include<iostream>
#include<deque>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m, cnt = 0;
	cin >> n >> m;
	deque<int> que;
	for (int i = 1; i <= n; i++)
	{
		que.push_back(i);
	}
	for (int i = 0; i < m; i++)
	{
		int standard;
		cin >> standard;

		int tmp = 0;
		while (que[tmp] != standard) tmp++;
		if (tmp < que.size() - tmp) { 
			cnt += tmp;
			while (tmp != 0) {
				int front = que.front();
				que.pop_front();
				que.push_back(front);
				tmp--;
			}
		}
		else { 
			cnt += que.size() - tmp;
			tmp = que.size() - tmp;
			while (tmp != 0) {
				int back = que.back();
				que.pop_back();
				que.push_front(back);
				tmp--;
			}
		}
		que.pop_front();
	}
	cout << cnt;
	return 0;
}