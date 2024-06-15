#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, cnt = 0;
	cin >> n;
	int cow[11]{};
	for (int i = 1; i <= 10; i++)
	{
		cow[i] = 2;
	}

	for (int i = 0; i < n; i++)
	{
		int num, pos;
		cin >> num >> pos;
		if (cow[num] == 2) cow[num] = pos;
		else {
			if (cow[num] == 1 && pos == 0) { 
				cnt++;
				cow[num] = pos;
			}
			else if (cow[num] == 0 && pos == 1) {
				cnt++;
				cow[num] = pos;
			}
		}
	}
	cout << cnt;
	return 0;
}