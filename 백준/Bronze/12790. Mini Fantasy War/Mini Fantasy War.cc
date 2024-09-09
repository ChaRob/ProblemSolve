#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int hp, mp, atk, def, php, pmp, patk, pdef;
		cin >> hp >> mp >> atk >> def >> php >> pmp >> patk >> pdef;
		hp = (hp + php >= 1) ? hp + php : 1;
		mp = (mp + pmp >= 1) ? mp + pmp : 1;
		atk = (atk + patk >= 0) ? atk + patk : 0;
		def += pdef;
		cout << hp + mp * 5 + atk * 2 + def * 2 << "\n";
	}
	return 0;
}