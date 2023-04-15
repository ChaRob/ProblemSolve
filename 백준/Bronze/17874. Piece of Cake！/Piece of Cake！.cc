#include<iostream>
using namespace std;

int max(int a, int b) {
	return (a > b) ? a : b;
}

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, h, v;
	cin >> n >> h >> v;
	cout << 4 * max(n - h, h) * max(n - v, v);
	return 0;
}