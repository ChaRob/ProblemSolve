#include <iostream>
#include<vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, p, res, cnt = 0;
	cin >> n >> p;
	vector<int> cycle;
	res = n;
	while (true) {
		bool check = true;
		res = (res * n) % p;
		for (vector<int>::iterator i = cycle.begin(); i != cycle.end(); i++)
		{
			if (*i == res) {
				check = false;
				break;
			}
		}
		if (check) cycle.push_back(res);
		else {
			for (vector<int>::iterator i = cycle.begin(); i != cycle.end(); i++)
			{
				if (*i == res) {
					check = true;
				}

				if (check) cnt++;
			}
			break;
		}
	}
	cout << cnt;
	return 0;
}