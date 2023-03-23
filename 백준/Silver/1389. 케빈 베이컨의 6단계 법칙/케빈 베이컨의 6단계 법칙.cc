#include<iostream>
#include<memory.h>
#include<queue>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m, a, b, sum, num = 1, cavin_num = 999999;
	int friends[101][101] = { 0 };
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		cin >> a >> b;
		friends[a][b] = 1;
		friends[b][a] = 1;
	}
	for (int i = 1; i <= n; i++) {
		sum = 0;
		int cavin[101], node;
		memset(cavin, -1, sizeof(cavin));
		queue<int> que;
		que.push(i);
		cavin[i] = 0;
		while (!que.empty()) {
			node = que.front();
			que.pop();
			for (int j = 1; j <= n; j++) {
				if (friends[node][j] == 1 && cavin[j] == -1) {
					cavin[j] = cavin[node] + 1;
					sum += cavin[j];
					que.push(j);
				}
			}
		}
		if (cavin_num > sum) {
			cavin_num = sum;
			num = i;
		}
	}
	cout << num;
	return 0;
}