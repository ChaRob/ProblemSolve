#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	string pattern;
	while (getline(cin, pattern)) {
		char cnt[4] = {};
		for (int i = 0; i < pattern.size(); i++)
		{
			if ('a' <= pattern[i] && pattern[i] <= 'z') {
				cnt[0]++;
			}
			else if ('A' <= pattern[i] && pattern[i] <= 'Z') {
				cnt[1]++;
			}
			else if ('0' <= pattern[i] && pattern[i] <= '9') {
				cnt[2]++;
			}
			else if (pattern[i] == ' ') {
				cnt[3]++;
			}
		}
		for (int i = 0; i < 4; i++)
		{
			cout << (int)cnt[i] << " ";
		}
		cout << "\n";
	}

	return 0;
}