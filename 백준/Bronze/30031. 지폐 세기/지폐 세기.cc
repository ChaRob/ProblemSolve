#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int l, h;
		cin >> l >> h;
		switch (l)
		{
		case 136:
			sum += 1000;
			break;
		case 142:
			sum += 5000;
			break;
		case 148:
			sum += 10000;
			break;
		case 154:
			sum += 50000;
			break;
		}
	}
	cout << sum;
	return 0;
}