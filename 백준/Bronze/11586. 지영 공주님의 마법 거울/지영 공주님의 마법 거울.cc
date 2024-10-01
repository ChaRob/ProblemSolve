#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, f;
	cin >> n;
	string mirror[100];
	for (int i = 0; i < n; i++)
	{
		cin >> mirror[i];
	}
	cin >> f;
	switch (f)
	{
	case 1:
		for (int i = 0; i < n; i++)
		{
			cout << mirror[i] << "\n";
		}
		break;
	case 2:
		for (int i = 0; i < n; i++)
		{
			reverse(mirror[i].begin(), mirror[i].end());
			cout << mirror[i] << "\n";
		}
		break;
	case 3:
		for (int i = 0; i < n; i++)
		{
			cout << mirror[n - i - 1] << "\n";
		}
		break;
	default:
		break;
	}
	return 0;
}