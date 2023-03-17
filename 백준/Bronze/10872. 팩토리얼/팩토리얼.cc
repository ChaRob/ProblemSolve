#include<iostream>
using namespace std;
int main() {
	int n;
	unsigned long res=1;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		res *= i;
	}
	cout << res;
	return 0;
}