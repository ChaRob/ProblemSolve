#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string words, ans = "";
	int cnt = 0;
	getline(cin, words);
	for (int i = 0; i < words.size() ; i++)
	{
		if (words[i] == '"') {
			cnt++;
			if (i != 0 && i != words.size()-1) {
				ans = "CE";
				break;
			}
			continue;
		}
		else {
			ans += words[i];
		}
	}
	if (cnt < 2 || ans == "") {
		ans = "CE";
	}
	cout << ans;
	return 0;
}