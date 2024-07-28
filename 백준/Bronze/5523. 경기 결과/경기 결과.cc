#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, A = 0, B = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		if (a > b) A++;
		else if (a < b) B++;
	}
	cout << A << " " << B;
	return 0;
}