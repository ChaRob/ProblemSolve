#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, cnt = 0;
	cin >> n;
	string member;
	map<string, bool> map;
	for (int i = 0; i < n; i++)
	{
		cin >> member;
		if (member == "ENTER") map.clear();
		else {
			if (map[member] == false) {
				cnt++;
				map[member] = true;
			}
		}
	}
	cout << cnt;
	return 0;
}