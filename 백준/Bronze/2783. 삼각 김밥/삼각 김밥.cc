#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	float x, y, n, a, b;
	cin >> x >> y >> n;
	float min = 1000 / y * x;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		float res = 1000 / b * a;
		min = (min < res) ? min : res;
	}
	cout << setprecision(2) << fixed << min;
	return 0;
}