#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int d;
		cin >> d;
		if (d % 2 > 0) cnt++;
	}
	cout << cnt;
	return 0;
}