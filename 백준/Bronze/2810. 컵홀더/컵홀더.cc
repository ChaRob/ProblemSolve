#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	char per;
	bool* cup = new bool[n + 2] {};
	int idx = 0, cnt = 0;
	while (cin >> per) {
		if (per == 'S') {
			for (int i = 0; i < 2; i++)
			{
				if (!cup[idx + i]) {
					cup[idx + i] = true;
					cnt++;
					break;
				}
			}
		}
		else {
			if (!cup[idx]) {
				cup[idx] = true;
				cnt++;
			}
			idx++;
			cin >> per;
			if (!cup[idx + 1]) {
				cup[idx + 1] = true;
				cnt++;
			}
		}
		idx++;
	}
	cout << cnt;
	return 0;
}