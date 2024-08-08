#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int A, B, m;
	cin >> A >> B >> m;
	int value = 0;
	for (int i = 0; i < m; i++)
	{
		int tmp;
		cin >> tmp;
		value += tmp * pow(A, m - (i + 1));
	}
	int idx = 0;
	while (value >= pow(B, idx)) idx++;
	idx--;
	while (idx >= 0)
	{
		int dit = pow(B, idx);
		int tmp = value / dit;
		value = value % dit;
		cout << tmp << " ";
		idx--;
	}
	return 0;
}