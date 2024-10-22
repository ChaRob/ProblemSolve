#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	float n, last;
	cin >> last;
	while (true)
	{
		cin >> n;
		if (n == 999) break;
		
		cout << fixed << setprecision(2) << n - last << "\n";
		last = n;
	}
	return 0;
}