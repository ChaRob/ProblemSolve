#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, k, tmp, i;
	cin >> n >> k;
	vector<int> x;
	for (i = 0; i < n; i++)
	{
		cin >> tmp;
		x.push_back(tmp);
	}
	sort(x.begin(), x.end(), greater<int>());
	i = 0;
	while (i != k) i++;
	cout << x[i-1];
	return 0;
}