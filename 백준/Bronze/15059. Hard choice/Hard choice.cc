#include<iostream>
using namespace std;
int main() {
	int ca, ba, pa;
	int cr, br, pr, res = 0;
	cin >> ca >> ba >> pa >> cr >> br >> pr;
	if (ca < cr) {
		res += cr - ca;
	}
	if (ba < br) {
		res += br - ba;
	}
	if (pa < pr) {
		res += pr - pa;
	}
	cout << res;
	return 0;
}