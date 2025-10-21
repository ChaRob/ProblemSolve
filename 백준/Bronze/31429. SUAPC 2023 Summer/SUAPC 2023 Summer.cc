#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> teams = {
	{12,1600},{11,894},{11,1327},{10,1311},{9,1004},{9,1178},
	{9,1357},{8,837},{7,1055},{6,556},{6,773}
};

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	cout << teams[n - 1].first << ' ' << teams[n - 1].second;
	return 0;
}