#include<iostream>
#include<math.h>
#include<string>
using namespace std;

long long int BittoDec(string num, int k) {
	long long int res = 0;
	for (int i = num.length() - 1; i >= 0; i--) {
		res += (num[i]-'0')*pow(k, num.length() - 1 - i);
	}
	return res;
}

long long int findmoney(string num2, string num3) {
	long long int num2_int = BittoDec(num2,2);
	long long int num3_int = BittoDec(num3,3);
	long long int tmp1, tmp2;
	for (int i = 1; i < num2.length(); i++) {
		for (int j = 0; j < num3.length(); j++) {
			tmp1 = pow(2, num2.length() - 1 - i);
			tmp2 = pow(3, num3.length() - 1 - j);
			if (num2[i] == '1') {
				num2_int -= tmp1;
				if (num3[j] == '2') {
					num3_int -= tmp2;
					if (num2_int == num3_int) {
						return num2_int;
					}
					if (j != 0) {
						num3_int -= tmp2;
						if (num2_int == num3_int) {
							return num2_int;
						}
						num3_int += tmp2;
					}
					num3_int += tmp2;
				}
				else if (num3[j] == '1') {
					if (j != 0) {
						num3_int -= tmp2;
						if (num2_int == num3_int) {
							return num2_int;
						}
						num3_int += tmp2;
					}
					num3_int += tmp2;
					if (num2_int == num3_int) {
						return num2_int;
					}
					num3_int -= tmp2;
				}
				else {
					num3_int += tmp2;
					if (num2_int == num3_int) {
						return num2_int;
					}
					num3_int += tmp2;
					if (num2_int == num3_int) {
						return num2_int;
					}
					num3_int -= 2*tmp2;
				}
				num2_int += tmp1;
			}
			else {
				num2_int += tmp1;
				if (num3[j] == '2') {
					num3_int -= tmp2;
					if (num2_int == num3_int) {
						return num2_int;
					}
					if (j != 0) {
						num3_int -= tmp2;
						if (num2_int == num3_int) {
							return num2_int;
						}
						num3_int += tmp2;
					}
					num3_int += tmp2;
				}
				else if (num3[j] == '1') {
					if (j != 0) {
						num3_int -= tmp2;
						if (num2_int == num3_int) {
							return num2_int;
						}
						num3_int += tmp2;
					}
					num3_int += tmp2;
					if (num2_int == num3_int) {
						return num2_int;
					}
					num3_int -= tmp2;
				}
				else {
					num3_int += tmp2;
					if (num2_int == num3_int) {
						return num2_int;
					}
					num3_int += tmp2;
					if (num2_int == num3_int) {
						return num2_int;
					}
					num3_int -= 2 * tmp2;
				}
				num2_int -= tmp1;
			}
		}
	}
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	long long int res = 0;
	string num2, num3;
	cin >> T;
	for (int test = 1; test <= T; test++) {
		cin >> num2 >> num3;
		res = findmoney(num2, num3);
		cout << "#" << test << " " << res << "\n";
	}
	return 0;
}