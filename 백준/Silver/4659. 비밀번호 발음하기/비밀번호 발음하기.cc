#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string password, check = "aioue";
	int pcnt, ncnt;
	while (cin >> password) {
		bool accept = false;
		pcnt = 0; ncnt = 0;
		if (password == "end") break;
		for (int i = 0; i < password.size(); i++)
		{
			if (check.find(password[i]) != string::npos) {
				pcnt++;
				accept = true;
				if (pcnt == 3) {
					accept = false;
					break;
				}
				ncnt = 0;
			}
			else {
				ncnt++;
				if (ncnt == 3) {
					accept = false;
					break;
				}
				pcnt = 0;
			}

			if (i > 0 && password[i] == password[i - 1]) {
				if (password[i] == 'e' || password[i] == 'o') {
					continue;
				}
				else {
					accept = false;
					break;
				}
			}
		}
		if (accept) {
			cout << "<" << password << "> is acceptable.\n";
		}
		else {
			cout << "<" << password << "> is not acceptable.\n";
		}
	}
	return 0;
}