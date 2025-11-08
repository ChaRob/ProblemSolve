#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

using ll = long long;

class Point
{
public:
	ll start;
	ll end;

	bool operator< (const Point& b) const
	{
		return start > b.start;
	}
};

bool SortPoint(const Point& a, const Point& b)
{
	return a.end < b.end;
}

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	ll n, maxCnt = 0, d;
	cin >> n;
	vector<Point> vec(n);
	for (int i = 0; i < n; i++)
	{
		cin >> vec[i].start >> vec[i].end;
		if (vec[i].start > vec[i].end)
		{
			ll tmp = vec[i].start;
			vec[i].start = vec[i].end;
			vec[i].end = tmp;
		}
	}
	cin >> d;
	sort(vec.begin(), vec.end(), SortPoint);
	priority_queue<Point> que;
	for (int i = 0; i < n; i++)
	{
		Point target = vec[i];

		if (target.end - target.start > d) continue;

		que.push(target);

		while (!que.empty() && que.top().start < target.end - d)
		{
			que.pop();
		}
		maxCnt = (maxCnt > que.size()) ? maxCnt : que.size();
	}
	cout << maxCnt;
	return 0;
}