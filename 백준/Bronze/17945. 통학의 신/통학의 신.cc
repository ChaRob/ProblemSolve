#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int A, B;
	cin >> A >> B;
	int x1 = -A - sqrt(A*A - B), x2 = -A + sqrt(A*A - B);
	if (x1 == x2) cout << x1;
	else cout << x1 << " " << x2;
	return 0;
}