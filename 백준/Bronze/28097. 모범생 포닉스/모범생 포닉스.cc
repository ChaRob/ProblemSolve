#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, hour = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		hour += tmp;
	}
	hour += (n - 1) * 8;
	cout << hour / 24 << " " << hour % 24;
	return 0;
}