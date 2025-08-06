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
		string lastname, firstname;
		cin >> lastname >> firstname;
		cout << "Case " << t + 1 << ": " << firstname << ", " << lastname << '\n';
	}
	return 0;
}