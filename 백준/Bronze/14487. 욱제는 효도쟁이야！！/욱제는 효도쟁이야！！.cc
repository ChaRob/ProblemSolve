#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, tmp, max = 0, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		max = (max > tmp) ? max : tmp;
		sum += tmp;
	}
	cout << sum - max;
	return 0;
}