#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		string s;
		getline(cin, s);
		if(s[0] >= 97) s[0] -= 32;
		cout << s << '\n';
	}
	return 0;
}