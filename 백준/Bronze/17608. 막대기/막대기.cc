#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int* wall = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> wall[i];
	}
	int look = 0, cnt = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		if (wall[i] > look) {
			cnt++;
			look = wall[i];
		}
	}
	cout << cnt;
	return 0;
}