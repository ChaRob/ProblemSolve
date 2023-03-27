#include<iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	char centence[5][15] = {};
	for (int i = 0; i < 5; i++) {
		cin.getline(centence[i], 16);
	}
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			if (centence[j][i]) {
				cout << centence[j][i];
			}
		}
	}
	return 0;
}