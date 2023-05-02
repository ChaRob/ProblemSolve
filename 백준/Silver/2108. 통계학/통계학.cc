#include<iostream>
#include<map>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	return a.second > b.second;
}

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int n, maxv = -5000, minv = 5000, tmp;
	double sum = 0;
	cin >> n;
	vector<int> arr;
	map<int,int> most;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		sum += tmp;
		maxv = (maxv > tmp) ? maxv : tmp;
		minv = (minv < tmp) ? minv : tmp;
		arr.push_back(tmp);
		auto search = most.find(tmp);
		if (search != most.end()) {
			most[tmp] += 1;
		}
		else {
			most[tmp] = 1;
		}
	}
	sort(arr.begin(), arr.end());
	vector<pair<int, int>> v(most.begin(), most.end());
	sort(v.begin(), v.end(), cmp);
	tmp = round(sum / n);
	cout << tmp << "\n";
	cout << arr[n / 2] << "\n";
	if (n > 1 && v[0].second == v[1].second) {
		cout << v[1].first << "\n";
	}
	else {
		cout << v[0].first << "\n";
	}
	cout << maxv - minv;

	return 0;
}