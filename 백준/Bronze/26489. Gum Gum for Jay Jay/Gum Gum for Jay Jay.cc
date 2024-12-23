#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int cnt = 0;
	string input;
	while (getline(cin, input)) { 
		if (input == "gum gum for jay jay") cnt++;
	}
	cout << cnt;
}