#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, x, k, a, b;
	cin >> n >> x >> k;
	bool* cups = new bool[n+1];
	cups[x] = true;
	for (int i = 0; i < k; i++)
	{
		cin >> a >> b;
		bool tmp = cups[a];
		cups[a] = cups[b];
		cups[b] = tmp;
	}
	for (int i = 1; i <= n; i++)
	{
		if (cups[i] == true) {
			cout << i;
			break;
		}
	}
	delete[] cups;
	return 0;
}