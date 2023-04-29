#include<iostream>
using namespace std;

int maxv(int x, int y) {
	return (x > y) ? x : y;
}

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int a, b, c, max_value;
	cin >> a >> b >> c;
	max_value = maxv(a, maxv(b, c));
	cout << max_value - a + max_value - b + max_value - c;

	return 0;
}