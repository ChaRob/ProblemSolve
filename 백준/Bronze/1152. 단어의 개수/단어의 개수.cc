#include<iostream>
#include<string>
using namespace std;
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int cnt = 0;
	string S;
	while (1) {
		cin >> S;
		if (cin.eof()) {
			break;
		}
		cnt++;
	}
	cout << cnt;
	
	return 0;
}