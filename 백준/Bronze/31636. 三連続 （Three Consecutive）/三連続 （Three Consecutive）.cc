#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	string s;
	cin >> s;
	if (s.find("ooo") != string::npos) cout << "Yes";
	else cout << "No";
	return 0;
}