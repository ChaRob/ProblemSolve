#include <iostream>
#include <map>
using namespace std;

struct Triple
{
	char direction;
	int dist;

	Triple() {};
	Triple(char _dir, int _d)
	{
		direction = _dir;
		dist = _d;
	}
};

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	map<int, Triple> coordi;
	for (int x = 0; x < n; x++)
	{
		int i, k;
		char j;
		cin >> i >> j >> k;
		Triple tri = Triple(j, k);
		coordi[i] = tri;
	}
	int start;
	cin >> start;
	while (coordi.find(start) != coordi.end())
	{
		Triple next = coordi[start];
		if (next.direction == 'R')
			start += next.dist;
		else
			start -= next.dist;
	}
	cout << start;
	return 0;
}