#include<iostream>
using namespace std;
int main() {
	int n,v,cnt=0;
	int A[100] = { 0 };
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	cin >> v;
	for (int i = 0; i < n; i++) {
		if (A[i] == v) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}