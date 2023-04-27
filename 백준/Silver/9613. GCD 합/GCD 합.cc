#include<iostream>
using namespace std;

int GCD(int a, int b) {
	int tmp;
	while (b > 0) {
		tmp = a;
		a = b;
		b = tmp % b;
	}
	return a;
}

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int T, n;
	long long res;
	cin >> T;
	for (size_t t = 0; t < T; t++)
	{
		cin >> n;
		res = 0;
		int *arr = new int[n];
		for (size_t i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		for (size_t i = 0; i < n-1; i++)
		{
			for (size_t j = i + 1; j < n; j++)
			{
				res += GCD(arr[i], arr[j]);
			}
		}
		cout << res << "\n";
		delete[] arr;
	}
	return 0;
}