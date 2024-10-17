#include<iostream>
#include<cstring>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		string input;
		cin >> input;
		bool bin[10] = {};
		for (char c: input)
		{
			bin[c - '0'] = true;;
		}
		int cnt = 0;
		for (int i = 0; i < 10; i++)
		{
			if (bin[i]) cnt++;
		}
		cout << cnt << "\n";
	}
	return 0;
}