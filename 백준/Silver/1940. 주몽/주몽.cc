#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m, cnt = 0;
	cin >> n >> m;
	vector<int> material;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		material.push_back(num);
	}
	sort(material.begin(), material.end());
	vector<int>::iterator left = material.begin(), right = material.end() - 1;
	while (left != right) {
		int res = *left + *right;
		if (res == m) {
			cnt++;
			right--;
			left = material.begin();
		}
		else if (res < m) {
			left++;
		}
		else if (res > m) {
			right--;
		}
	}
	cout << cnt;
	return 0;
}