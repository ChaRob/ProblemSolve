#include<iostream>
#include<string.h>
using namespace std;
int main() {
	int T;
	char S[1001];
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	cin >> T;
	for (int i = 1; i <= T; i++) {
		cin >> S;
		cout << S[0] << S[strlen(S) - 1] << "\n";
	}
	return 0;
}