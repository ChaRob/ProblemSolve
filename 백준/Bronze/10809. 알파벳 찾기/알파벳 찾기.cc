#include<iostream>
#include<cstring>
#include<memory.h>
using namespace std;
int main() {
	int alpha[26];
	char S[101];
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	memset(alpha, -1, 4*26);
	cin >> S;
	for (int i = 0; i < strlen(S); i++) {
		if (alpha[int(S[i]) - 97] == -1) {
			alpha[int(S[i]) - 97] = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		cout << alpha[i] << " ";
	}
	return 0;
}