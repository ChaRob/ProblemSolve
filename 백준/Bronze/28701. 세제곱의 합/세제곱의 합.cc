#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	long long ans;
	cin >> n;
	ans = n * (n + 1) / 2;
	cout << ans << "\n" << ans*ans << "\n" << ans*ans;

	return 0;
}