#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int k;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		int n, maxn = 0, minn = 999, gap = 0;
		cin >> n;
		vector<int> cl;
		for (int j = 0; j < n; j++)
		{
			int po;
			cin >> po;
			maxn = (maxn > po) ? maxn : po;
			minn = (minn < po) ? minn : po;
			cl.push_back(po);
		}
		sort(cl.begin(), cl.end());
		for (int j = 1; j < cl.size(); j++)
		{
			gap = (gap > cl[j] - cl[j - 1]) ? gap : cl[j] - cl[j - 1];
		}
		cout << "Class " << i+1 << "\n";
		cout << "Max " << maxn << ", Min " << minn << ", Largest gap " << gap << "\n";
	}
	return 0;
}