#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string input, keyword, eraseNum = "";
	cin >> input >> keyword;
	for (char c: input)
	{
		if (!isdigit(c))
		{
			eraseNum += c;
		}
	}
	int res = eraseNum.find(keyword);
	if (res >= 0) cout << 1;
	else cout << 0;
	return 0;
}