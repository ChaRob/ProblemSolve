#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	cout << fixed << setprecision(2) << (double)(n) / 4;
	return 0;
}