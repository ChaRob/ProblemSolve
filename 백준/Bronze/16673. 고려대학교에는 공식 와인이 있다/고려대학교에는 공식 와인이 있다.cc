#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int c, k, p;
	long long wines = 0;
	cin >> c >> k >> p;
	for (int i = 1; i <= c; i++)
	{
		wines += k * i + p * i * i;
	}
	cout << wines;
	return 0;
}