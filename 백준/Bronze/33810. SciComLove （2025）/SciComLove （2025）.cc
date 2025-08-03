#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string s = "SciComLove", input;
	cin >> input;
	int cnt = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != input[i]) {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}