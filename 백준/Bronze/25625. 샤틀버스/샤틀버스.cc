#include<iostream>
using namespace std;

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int x, y;
	cin >> x >> y;
	if (y > x) {
		cout << y - x;
	}
	else {
		cout << x + y;
	}
	return 0;
}