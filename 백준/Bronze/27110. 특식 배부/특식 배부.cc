#include<iostream>
using namespace std;

int min(int a, int b) {
	return (a > b) ? b : a;
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, a, b, c, sum;
	cin >> n;
	cin >> a >> b >> c;
	sum = min(n, a) + min(n, b) + min(n, c);
	cout << sum;
	return 0;
}