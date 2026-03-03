#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

bool isPrime[1000];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 2; i < 1000; i++)
	{
		isPrime[i] = true;
	}
	for (int i = 2; i < sqrt(1000) + 1; i++)
	{
		int j = 2;
		while (i * j < 1000)
		{
			isPrime[i * j] = false;
			j += 1;
		}
	}
	vector<int> primes;
	for (int i = 2; i < 1000; i++)
	{
		if (isPrime[i])
			primes.push_back(i);
	}
	for (int i = 0; i < primes.size() - 1; i++)
	{
		int multi = primes[i] * primes[i + 1];
		if (multi > n)
		{
			cout << multi;
			break;
		}
	}
	return 0;
}