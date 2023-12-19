#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int cnt;
		char c;
		cin >> cnt >> c;
		for (int i = 0; i < cnt; i++)
		{
			cout << c;
		}
		cout << "\n";
	}
	return 0;
}