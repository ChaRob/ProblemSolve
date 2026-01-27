#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	char c;
	cin >> c;
	string ans;
	switch (c)
	{
	case 'F':
		ans = "Foundation";
		break;
	case 'C':
		ans = "Claves";
		break;
	case 'V':
		ans = "Veritas";
		break;
	case 'E':
		ans = "Exploration";
		break;
	}
	cout << ans;
	return 0;
}