#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int minTrash = 1000000000, minTrashIdx = 100000;
	for (int i = 0; i < n; i++)
	{
		int nowTrash;
		cin >> nowTrash;
		if (nowTrash < minTrash) {
			minTrash = nowTrash;
			minTrashIdx = i;
		}
	}
	cout << minTrashIdx;
	return 0;
}