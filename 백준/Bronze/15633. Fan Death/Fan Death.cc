#include<iostream>
#include<cmath>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, sum = 0;
	cin >> n;
	if (n == 1) sum = 1;
	else {
		for (int i = 1; i <= sqrt(n); i++)
		{
			if (n % i == 0) {
				sum += i;
				if (i != n / i) {
					sum += n / i;
				}
			}
		}
	}
	cout << sum * 5 - 24;
	return 0;
}