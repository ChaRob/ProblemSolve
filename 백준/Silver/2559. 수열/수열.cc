#include<iostream>
using namespace std;

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int n, k, sum = 0, max_sum, i, j;
	cin >> n >> k;
	int *temperature = new int[n];
	for (i = 0; i < n; i++)
	{
		cin >> temperature[i];
	}
	i = 0;
	j = 0;
	while (j - i != k) sum += temperature[j++];
	max_sum = sum;
	while (i < n - k)
	{
		sum += temperature[j++] - temperature[i++];
		max_sum = (max_sum > sum) ? max_sum : sum;
	}
	cout << max_sum;

	delete[] temperature;
	return 0;
}