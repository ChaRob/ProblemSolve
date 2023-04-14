#include<iostream>
using namespace std;
int main()
{
	cout.tie(NULL);
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int b, P, res;
	cin >> b;
	P = 5 * b - 400;
	if (P < 100) res = 1;
	else if (P == 100) res = 0;
	else res = -1;
	cout << P << "\n" << res;
	return 0;
}