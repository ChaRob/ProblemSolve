#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, cnt = 0;
	cin >> n;
	bool com[100] = {};
	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		if (!com[tmp - 1])	com[tmp - 1] = true;
		else cnt++;
	}
	cout << cnt;
	return 0;
}