#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int n, k, tmp;
	cin >> n >> k;
	vector<int> arr;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		arr.push_back(tmp);
	}
	sort(arr.begin(), arr.end());
	cout << arr[k - 1];
	return 0;
}