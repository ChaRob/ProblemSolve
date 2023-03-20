#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	string num1, num2;
	cin >> num1 >> num2;
	reverse(num1.begin(), num1.end());
	reverse(num2.begin(), num2.end());
	int n1 = stoi(num1), n2 = stoi(num2);
	if (n1 > n2) {
		cout << n1;
	}
	else {
		cout << n2;
	}
	return 0;
}