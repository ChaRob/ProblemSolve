#include<iostream>
#include<cstring>
using namespace std;
int main() {
	int digits[4] = { 0 };
	char output[10] = "answer";
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	for (int i = 0; i < 4; i++) {
		cin >> digits[i];
	}
	if (digits[0] == 8 || digits[0] == 9) {
		if (digits[1] == digits[2]) {
			if (digits[3] == 8 || digits[3] == 9) {
				strcpy(output, "ignore");
			}
		}
	}
	cout << output;
	return 0;
}