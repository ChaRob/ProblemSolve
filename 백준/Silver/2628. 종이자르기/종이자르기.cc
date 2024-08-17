#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int m, n, dot, maxV = 0;
	cin >> m >> n >> dot;
	bool mline[101] = {}, nline[101] = {};
	for (int i = 0; i < dot; i++)
	{
		int rc, num;
		cin >> rc >> num;
		if (rc == 0) {
			nline[num] = true;
		}
		else {
			mline[num] = true;
		}
	}
	mline[m] = true; nline[n] = true;
	int bm = 0, bn = 0;
	for (int i = 0; i <= m; i++)
	{
		if (mline[i]) {
			for (int j = 0; j <= n; j++)
			{
				if (nline[j]) {
					int col = i - bm;
					int row = j - bn;
					maxV = (maxV > col * row) ? maxV : col * row;
					bn = j;
				}
			}
			bm = i;
			bn = 0;
		}
	}
	cout << maxV;
	return 0;
}