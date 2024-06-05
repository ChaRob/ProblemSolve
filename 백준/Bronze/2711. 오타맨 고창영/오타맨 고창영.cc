#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int pos;
		string s;
		cin >> pos >> s;
		s.erase(pos - 1, 1);
		cout << s << "\n";
	}
	return 0;
}