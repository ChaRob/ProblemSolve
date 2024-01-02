#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	cin.ignore();
	string mim[7] = {
		"Never gonna give you up",
		"Never gonna let you down",
		"Never gonna run around and desert you",
		"Never gonna make you cry",
		"Never gonna say goodbye",
		"Never gonna tell a lie and hurt you",
		"Never gonna stop"
	};
	bool out = false;
	for (int i = 0; i < n; i++)
	{
		string input;
		getline(cin, input);
		bool check = false;
		for (int j = 0; j < 7; j++)
		{
			if (mim[j] == input) {
				check = true;
				break;
			}
		}
		if (!check) {
			out = true;
			break;
		}
	}
	if (out) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	return 0;
}