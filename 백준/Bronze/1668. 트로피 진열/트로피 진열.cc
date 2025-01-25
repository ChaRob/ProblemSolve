#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, lCnt = 0, rCnt = 0;
	cin >> n;
	int* tropy = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> tropy[i];
	}
	int maxH = 0;
	for (int i = 0; i < n; i++)
	{
		if (maxH < tropy[i]) {
			maxH = tropy[i];
			lCnt++;
		}
	}
	cout << lCnt << "\n";
	maxH = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		if (maxH < tropy[i]) {
			maxH = tropy[i];
			rCnt++;
		}
	}
	cout << rCnt++;
	delete[] tropy;
	return 0;
}