#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string word, reject = "CAMBRIDGE";
	cin >> word;
	for (auto& c : word)
	{
		if (reject.find(c) == string::npos) {
			cout << c;
		}
	}
	return 0;
}