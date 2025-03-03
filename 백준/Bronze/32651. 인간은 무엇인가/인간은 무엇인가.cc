#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	if (n <= 100000 && n % 2024 == 0) cout << "Yes";
	else cout << "No";
	return 0;
}