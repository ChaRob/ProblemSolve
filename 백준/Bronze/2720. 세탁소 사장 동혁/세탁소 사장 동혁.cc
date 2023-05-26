#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	int coin[4] = { 25, 10, 5, 1 };
	for (int test = 0; test < T; test++)
	{
		int n;
		cin >> n;
		for (int i = 0; i < 3; i++)
		{
			cout << n / coin[i] << " ";
			n = n % coin[i];
		}
		cout << n << "\n";
	}
	
	return 0;
}