#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, x;
	cin >> n >> x;
	int* A = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	int min = (1<<31)-1;
	for (int i = 0; i < n-1; i++)
	{
		int val = (A[i] + A[i + 1]) * x;
		min = (min < val) ? min : val;
	}
	cout << min;
	delete[] A;
	return 0;
}