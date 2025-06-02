#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int sa, sb, sc;
	cin >> sa >> sb;
	sc = sa ^ sb;
	cout << sc;
	return 0;
}