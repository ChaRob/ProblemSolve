#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, cnt = 0;
	cin >> n;
	for (int i = 0; i < 31; i++)
	{
		if (n & (1 << i)) {
			cnt++;
		}
	}
	if (cnt == 1) {
		cout << 1;
	}
	else {
		cout << 0;
	}
	return 0;
}