#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int A, last = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> A;
		cout << A * i - last * (i - 1) << " ";
		last = A;
	}
	return 0;
}