#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string a, b;
	cin >> a >> b;
	int x = abs(a[0] - b[0]), y = abs(a[1] - b[1]);
	if (x < y)
		cout << x << " " << y;
	else
		cout << y << " " << x;
	return 0;
}