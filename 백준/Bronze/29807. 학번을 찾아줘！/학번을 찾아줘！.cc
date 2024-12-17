#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	int a = 0, b = 0, c = 0;
	int score[5] = {};
	for (int t = 0; t < T; t++)
	{
		cin >> score[t];
	}
	a = score[0] - score[2];
	if (a > 0) a *= 508;
	else a = a * (-108);
	b = score[1] - score[3];
	if (b > 0) b *= 212;
	else b = b * (-305);
	if (score[4] > 0) c = score[4] * 707;
	cout << (a + b + c) * 4763;
	return 0;
}