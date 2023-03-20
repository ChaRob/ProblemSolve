#include<iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int piece[6] = { 1,1,2,2,2,8 };
	int now;
	for (int i = 0; i < 6; i++) {
		cin >> now;
		cout << piece[i] - now << " ";
	}
	return 0;
}