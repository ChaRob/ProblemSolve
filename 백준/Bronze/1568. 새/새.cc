#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int n, time = 0, i = 1;
	cin >> n;
	while (n > 0)
	{
		int x = (int)sqrt(n), sum;
		while (true)
		{
			sum = x * (x + 1) / 2;
			if (n < sum) {
				x--;
				sum = x * (x + 1) / 2;
				break;
			}
			else if (n == sum) break;
			x++;
		}
		time += x;
		n -= sum;
	}
	cout << time;
	return 0;
}