#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string input;
	getline(cin, input);
	for (char& c : input) {
		if (!islower(c)) c = tolower(static_cast<unsigned char>(c));
	}
	size_t pos = input.find("d2");
	if (pos != string::npos) cout << "D2";
	else cout << "unrated";
	return 0;
}