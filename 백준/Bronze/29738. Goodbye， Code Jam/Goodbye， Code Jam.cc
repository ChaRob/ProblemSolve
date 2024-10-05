#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 1; t <= T; t++)
	{
		int n;
		string out;
		cin >> n;
		if (n <= 25)		out = "World Finals";
		else if (n <= 1000) out = "Round 3";
		else if (n <= 4500) out = "Round 2";
		else				out = "Round 1";
		cout << "Case #" << t << ": " << out << "\n";
	}
	return 0;
}