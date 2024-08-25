#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a[10], b[10], ac = 0, bc = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cin >> b[i];
	}
	for (int i = 0; i < 10; i++)
	{
		if (a[i] > b[i]) {
			ac++;
		}
		else if (a[i] < b[i]) {
			bc++;
		}
	}
	if (ac > bc) cout << "A";
	else if (ac < bc) cout << "B";
	else cout << "D";
	return 0;
}