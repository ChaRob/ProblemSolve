#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	char c;
	cin >> c;
	if (c == 'E') cout << 'I';
	else cout << 'E';
	cin >> c;
	if (c == 'S') cout << 'N';
	else cout << 'S';
	cin >> c;
	if (c == 'T') cout << 'F';
	else cout << 'T';
	cin >> c;
	if (c == 'J') cout << 'P';
	else cout << 'J';
	return 0;
}