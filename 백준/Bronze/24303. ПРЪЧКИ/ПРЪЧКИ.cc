#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

struct Data
{
	int len;
	int num;
	Data(int _len, int _num)
	{
		len = _len;
		num = _num;
	}
};

bool Compare(const Data& _a, const Data& _b)
{
	return _a.len > _b.len;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a1, a2, a3, b1, b2, b3;
	float l;
	cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> l;
	vector<Data> vec = {
		Data(a1,b1),
		Data(a2,b2),
		Data(a3,b3)
	};
	sort(vec.begin(), vec.end(), Compare);
	int cnt = 0;
	if (l / vec[0].len > vec[0].num)
	{
		cnt += vec[0].num;
		l -= vec[0].len * vec[0].num;
		if (l / vec[1].len > vec[1].num)
		{
			cnt += vec[1].num;
			l -= vec[1].len * vec[1].num;
			if (l / vec[2].len > vec[2].num)
				cnt = 0;
			else
				cnt += (int)ceil(l / vec[2].len);
		}
		else
			cnt += (int)ceil(l / vec[1].len);
	}
	else
		cnt += (int)ceil(l / vec[0].len);
	cout << cnt;
	return 0;
}