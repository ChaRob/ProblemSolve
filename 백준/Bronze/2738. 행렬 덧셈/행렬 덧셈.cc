#include<iostream>
#include<memory.h>
using namespace std;
int main() {
	int n, m;
	int A[100][100];
	int B[100][100];
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	cin >> n >> m;
	memset(A, 0, n*m);
	memset(B, 0, n*m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> A[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> B[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << A[i][j] + B[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}