#include <iostream>
#include <vector>
using namespace std;

using ll = long long;

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<int> vec;
	vector<int> count;
	ll cnt = 0;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		if (vec.empty())
		{
			vec.push_back(a);
			count.push_back(0);
			continue;
		}

		if (vec.back() < a)
		{
			while (!vec.empty() && vec.back() < a)
			{
				cnt++;
				vec.pop_back();
				count.pop_back();
			}
		}
		vec.push_back(a);
		count.push_back(0);
		int vecIdx = vec.size() - 1;
		if (vecIdx - 1 >= 0 && vec[vecIdx - 1] == a)
		{
			count[vecIdx] = count[vecIdx - 1] + 1;
			cnt += count.back();
			vecIdx -= count[vecIdx];
		}
		if (vecIdx - 1 >= 0) cnt++;
	}
	cout << cnt;
	return 0;
}