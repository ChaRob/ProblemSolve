#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string s[2] = { "SciComLove", "evoLmoCicS"};
	int n;
	cin >> n;
	cout << s[n % 2];
	return 0;
}