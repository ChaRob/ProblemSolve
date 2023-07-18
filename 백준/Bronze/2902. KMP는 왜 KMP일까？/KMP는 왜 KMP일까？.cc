#include<iostream>
#include<string.h>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string long_names;
	cin >> long_names;
	for (char c : long_names )
	{
		if (isupper(c)) {
			cout << c;
		}
	}
	return 0;
}