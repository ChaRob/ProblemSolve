#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	string a, b;
	cin >> a >> b;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] < b[i]) cout << b[i];
		else cout << a[i];
	}
	return 0;
}