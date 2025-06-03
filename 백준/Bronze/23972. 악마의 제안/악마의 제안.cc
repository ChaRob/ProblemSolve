#include<iostream>
#include<cmath>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	long long K, N, X;
	cin >> K >> N;
	if (N == 1) cout << -1;
	else {
		X = ceil((N * K + N - 2) / (N - 1));
		cout << X;
	}
	return 0;
}