#include <iostream>
#include <cstring>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string s, p;
	cin >> s >> p;
	if (strstr(s.c_str(), p.c_str())) {
		cout << 1;
	}
	else cout << 0;
	return 0;
}