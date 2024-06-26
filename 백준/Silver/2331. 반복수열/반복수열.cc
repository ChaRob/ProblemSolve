#include <iostream>
#include <unordered_map>
#include <math.h>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	unordered_map<int, int> nums;
	int n, p;
	cin >> n >> p;
	nums[n]++;
	while (true)
	{
		int sum = 0, i = 1;
		while (n > 0)
		{
			sum += (int)pow((n % (int)pow(10, i)), p);
			n /= 10;
		}
		if (nums[sum] > 1) {
			break;
		}
		nums[sum]++;
		n = sum;
	}
	int cnt = 0;
	for (auto& res : nums)
	{
		if (res.second == 1) cnt++;
	}
	cout << cnt;
	return 0;
}