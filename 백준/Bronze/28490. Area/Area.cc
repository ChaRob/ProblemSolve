#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, h, w, size, max = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> h >> w;
		size = h * w;
		max = (max > size) ? max : size;
	}
	cout << max;
	return 0;
}