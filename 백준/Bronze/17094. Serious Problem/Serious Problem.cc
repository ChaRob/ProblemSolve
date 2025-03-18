#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int e = 0, e2 = 0;
	string n, input;
	getline(cin, n);
	getline(cin, input);
	for (char c : input)
	{
		if (c == 'e') e++;
		else if (c == '2') e2++;
	}
	if (e == e2) cout << "yee";
	else if (e > e2) cout << "e";
	else cout << "2";
	return 0;
}