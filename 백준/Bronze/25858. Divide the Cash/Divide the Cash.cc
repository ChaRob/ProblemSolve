#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, r, s = 0;
	cin >> n >> r;
	int* p = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];
		s += p[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << p[i] * r / s << "\n";
	}
	delete[] p;
	return 0;
}