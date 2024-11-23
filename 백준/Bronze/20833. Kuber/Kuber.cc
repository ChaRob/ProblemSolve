#include<iostream>
#include<cmath>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	long long sum = 0;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		sum += pow(i, 3);
	}
	cout << sum;
	return 0;
}