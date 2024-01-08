#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int *A = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		int B;
		cin >> B;
		if (A[i] <= B) {
			cnt++;
		}
	}
	cout << cnt;
	delete[] A;
	return 0;
}