#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int A, B, C, res = 0;
	cin >> A >> B >> C;
	short fee[101] = {};
	for (int i = 0; i < 3; i++)
	{
		short s, e;
		cin >> s >> e;
		for (int j = s; j < e; j++)
		{
			fee[j]++;
		}
	}
	for (int i = 1; i < 101; i++)
	{
		switch (fee[i])
		{
		case 1:
			res += A;
			break;
		case 2:
			res += B*2;
			break;
		case 3:
			res += C*3;
		default:
			break;
		}
	}
	cout << res;
	return 0;
}