#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	float q1, q2;
	while (true)
	{
		cin >> q1 >> q2;
		if (q1 == 0 && q2 == 0) {
			cout << "AXIS\n";
			break;
		}
		else if (q1 == 0 || q2 == 0) cout << "AXIS\n";
		else if (q1 > 0 && q2 > 0) cout << "Q1\n";
		else if (q1 < 0 && q2 > 0) cout << "Q2\n";
		else if (q1 < 0 && q2 < 0) cout << "Q3\n";
		else cout << "Q4\n";
	}
	return 0;
}