#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m = 0;
	char a;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a == 'a' || a == 'i' || a == 'o' || a == 'u' || a == 'e') {
			m++;
		}
	}
	cout << m;
	return 0;
}