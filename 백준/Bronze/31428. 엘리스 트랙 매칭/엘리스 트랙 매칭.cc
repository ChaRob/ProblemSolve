#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int cnt = 0;
	string input;
	getline(cin, input);
	getline(cin, input);
	char helobit;
	cin >> helobit;
	for (char c : input)
	{
		if (helobit == c) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}