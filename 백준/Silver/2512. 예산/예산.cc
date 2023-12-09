#include<iostream>
using namespace std;

int area[10000];

int BS(int left, int right, int& n, int& sumprice) {
	int middle;
	while (left + 1 < right) {
		middle = (left + right) / 2;
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += (area[i] <= middle)? area[i] : middle;
		}
		if (sumprice >= sum) {
			left = middle;
		}
		else {
			right = middle;
		}
	}
	return left;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, sum = 0, minprice = 100001, maxprice = 0, sumprice;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> area[i];
		maxprice = (maxprice > area[i]) ? maxprice : area[i];
		minprice = (minprice < area[i]) ? minprice : area[i];
		sum += area[i];
	}
	cin >> sumprice;
	if (sumprice >= sum) {
		cout << maxprice;
	}
	else {
		cout << BS(1, maxprice, n, sumprice);
	}
	return 0;
}