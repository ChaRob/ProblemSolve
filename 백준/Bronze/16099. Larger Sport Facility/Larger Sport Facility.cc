#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		long long lt, wt, le, we, tr, er;
		cin >> lt >> wt >> le >> we;
		tr = lt * wt;
		er = le * we;
		if (tr > er) cout << "TelecomParisTech\n";
		else if (tr < er) cout << "Eurecom\n";
		else cout << "Tie\n";
	}

	return 0;
}