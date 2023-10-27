#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, k;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		while (k-- > 0) {
			cout << '=';
		}
		cout << "\n";
	}
	return 0;
}