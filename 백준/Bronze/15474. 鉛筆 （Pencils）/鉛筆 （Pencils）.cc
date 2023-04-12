#include<iostream>
#include<math.h>
using namespace std;

int min(int a, int b) {
	return (a > b) ? b : a;
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, a, b, c, d;
	cin >> n >> a >> b >> c >> d;
	cout << min(ceil(float(n) / a)*b, ceil(float(n) / c)*d);
	return 0;
}