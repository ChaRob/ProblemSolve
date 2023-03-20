#include<iostream>
#include<cstring>
using namespace std;
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T,R;
	char S[21];
	cin >> T;
	for (int t = 1; t <= T; t++) {
		cin >> R;
		cin >> S;
		for (int i = 0; i < strlen(S); i++) {
			for (int j = 1; j <= R; j++) {
				cout << S[i];
			}
		}
		cout << "\n";
	}
	return 0;
}