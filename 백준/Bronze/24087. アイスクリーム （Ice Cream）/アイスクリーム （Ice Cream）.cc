#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int S, A, B, cnt;
	cin >> S >> A >> B;
	if (S > A) cnt = ceil((float)(S - A) / (float)B) * 100 + 250;
	else cnt = 250;
	cout << cnt;
	return 0;
}