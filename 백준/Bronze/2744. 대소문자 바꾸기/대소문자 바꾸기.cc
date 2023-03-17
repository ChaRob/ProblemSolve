#include<iostream>
#include<string.h>
using namespace std;
int main() {
	char c[101];
	cin >> c;
	for (int i = 0; i < strlen(c); i++) {
		if (int(c[i]) <= 90) {
			cout << char(int(c[i]) + 32);
		}
		else {
			cout << char(int(c[i]) - 32);
		}
	}
	return 0;
}