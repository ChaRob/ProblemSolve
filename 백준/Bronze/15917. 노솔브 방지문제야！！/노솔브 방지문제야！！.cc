#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int Q, a;
	cin >> Q;
	for (int q = 0; q < Q; q++)
	{
		cin >> a;
		if ((a & (-a)) == a) cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}