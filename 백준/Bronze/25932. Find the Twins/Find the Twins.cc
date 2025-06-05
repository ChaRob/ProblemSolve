#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int n;
		bool zack = false, mack = false;
		for (int i = 0; i < 10; i++)
		{
			cin >> n;
			cout << n << " ";
			if (n == 18) mack = true;
			else if (n == 17) zack = true;
		}
		if (zack && mack) cout << "\nboth\n\n";
		else if (zack) cout << "\nzack\n\n";
		else if (mack) cout << "\nmack\n\n";
		else cout << "\nnone\n\n";
	}
	return 0;
}