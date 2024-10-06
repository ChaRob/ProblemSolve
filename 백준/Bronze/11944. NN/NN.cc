#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	string n, m;
	cin >> n >> m;
	int i = 0, len = 0;
	int cnt = stoi(n), maxLen = stoi(m);
	while (i < cnt && len < maxLen)
	{
		if (len + n.size() > maxLen) {
			for (int j = 0; j < maxLen - len; j++)
			{
				cout << n[j];
			}
			break;
		}
		else {
			cout << n;
			len+=n.size();
		}
		i++;
	}
	return 0;
}