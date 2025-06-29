#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int A, B;
	cin >> A >> B;
	int res = A * 1000 + B * 10000;
	cout << res;
	return 0;
}