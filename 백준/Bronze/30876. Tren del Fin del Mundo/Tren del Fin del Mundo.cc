#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, x = 1000, y = 1000;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int tx, ty;
		cin >> tx >> ty;
		if (ty <= y)
		{
			x = tx;
			y = ty;
		}
	}
	cout << x << " " << y;
	return 0;
}