#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int aa, ah, ba, bh;
	cin >> aa >> ah >> ba >> bh;
	while (true)
	{
		ah -= ba;
		bh -= aa;
		if (ah <= 0 && bh <= 0) { 
			cout << "DRAW";
			break;
		}
		else if (ah <= 0) { 
			cout << "PLAYER B";
			break;
		}
		else if (bh <= 0) {
			cout << "PLAYER A";
			break;
		}
	}
	return 0;
}