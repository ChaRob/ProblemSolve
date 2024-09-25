#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	char n;
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		sum += pow(n - '0', 5);
	}
	cout << sum;
	return 0;
}