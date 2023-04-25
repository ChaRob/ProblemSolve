#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int cmp(void const* a, void const* b) {
	const int x = *(int *)a;
	const int y = *(int *)b;
	if (x > y) return 1;
	else if (x < y)return -1;
	else return 0;
}

int binary_search(int left, int right, vector<int> router, int n, int c) {
	int start = left, end = right;
	int mid, res = 0, count, now;
	while (start <= end) {
		mid = (start + end) / 2;
		now = router[0];
		count = 1;

		for (size_t i = 1; i < n; i++)
		{
			if (router[i] >= now + mid) {
				count++;
				now = router[i];
			}
		}

		if (count >= c) {
			start = mid + 1;
			res = mid;
		}
		else {
			end = mid - 1;
		}
	}
	return res;
}

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int n, c, tmp;
	cin >> n >> c;
	vector<int> router;
	for (size_t i = 0; i < n; i++)
	{
		cin >> tmp;
		router.push_back(tmp);
	}
	sort(router.begin(), router.end());
	
	cout << binary_search(1, router[n - 1] - router[0], router, n, c);
	return 0;
}