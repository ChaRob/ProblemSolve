#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int A, W, V;
	cin >> A >> W >> V;
	if (A <= W / V) cout << 1;
	else cout << 0;
	return 0;
}