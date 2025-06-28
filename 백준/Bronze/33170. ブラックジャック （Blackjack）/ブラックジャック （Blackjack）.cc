#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int A, B, C;
	cin >> A >> B >> C;
	if (A + B + C <= 21) cout << 1;
	else cout << 0;
	return 0;
}