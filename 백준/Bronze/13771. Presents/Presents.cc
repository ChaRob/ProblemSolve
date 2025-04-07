#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<float> prices;
	for (int i = 0; i < n; i++)
	{
		float price;
		cin >> price;
		prices.push_back(price);
	}
	sort(prices.begin(), prices.end());
	cout << fixed << setprecision(2) << prices[1];
	return 0;
}