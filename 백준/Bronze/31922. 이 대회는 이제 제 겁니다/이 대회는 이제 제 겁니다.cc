#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int A, P, C;
	cin >> A >> P >> C;
	if (A + C > P) cout << A + C;
	else cout << P;
	return 0;
}