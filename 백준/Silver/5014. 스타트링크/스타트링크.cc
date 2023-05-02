#include<iostream>
#include<queue>
#include<memory.h>
using namespace std;

int cnt[1000001];

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int f, s, g, u, d;
	cin >> f >> s >> g >> u >> d;
	if ((s > g && d == 0) || (s < g && u == 0)) {
		cout << "use the stairs";
	}
	else {
		memset(cnt, -1, sizeof(cnt));
		queue<int> que;
		que.push(s);
		cnt[s] = 0;
		while (!que.empty()) {
			int floor = que.front();
			que.pop();
			if (floor == g) {
				break;
			}
			if (floor + u <= f && cnt[floor + u] == -1) {
				que.push(floor + u);
				cnt[floor + u] = cnt[floor] + 1;
			}
			if (floor - d > 0 && cnt[floor - d] == -1) {
				que.push(floor - d);
				cnt[floor - d] = cnt[floor] + 1;
			}
		}
		if (cnt[g] != -1) {
			cout << cnt[g];
		}
		else {
			cout << "use the stairs";
		}
	}

	return 0;
}