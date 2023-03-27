#include<iostream>
#include<string>
using namespace std;
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	string croalpha[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	int crolength[8] = { 2,2,3,2,2,2,2,2 }, j, cnt = 0;
	bool check = false;
	string input;
	cin >> input;
	for (int i = 0; i < input.length();) {
		for (j = 0; j < 8; j++) {
			if (croalpha[j][0] == input[i]) {
				int k = 1;
				check = true;
				while (crolength[j]>k){
					if (croalpha[j][k] != input[i + k]) {
						check = false;
						break;
					}
					k++;
				}
				if (check) {
					cnt++;
					i += crolength[j];
					break;
				}
			}
		}
		if (j == 8) {
			i++;
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}