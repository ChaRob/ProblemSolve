#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string GetReversed(const string& _str) {
	string _reversed = _str;
	reverse(_reversed.begin(), _reversed.end());
	return _reversed;
}

bool IsReversed(const string& _input) {
	int size = _input.size();
	for (int i = 0; i < size / 2; i++)
	{
		if (_input[i] != _input[size - i - 1]) return false;
	}
	return true;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		string input;
		cin >> input;
		int sumInput = atoi(input.c_str())+atoi(GetReversed(input).c_str());
		if (IsReversed(to_string(sumInput))) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}