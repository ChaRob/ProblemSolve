#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int t1, m1, t2, m2;
	cin >> t1 >> m1 >> t2 >> m2;
	if (t2 < t1)
	{
		t2 += 24;
	}
	else if (t2 == t1 && m2 < m1)
	{
		t2 += 23;
		m2 += 60;
	}
	int total = (t2 - t1) * 60 + (m2 - m1);
	int cycle = total / 30;
	cout << total << " " << cycle << "\n";
	return 0;
}