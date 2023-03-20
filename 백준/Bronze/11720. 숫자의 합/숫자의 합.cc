#include<iostream>
using namespace std;
int main() {
	int n, sum = 0;
	char nums[101];
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	cin >> n >> nums;
	for (int i = 0; i < n; i++) {
		sum += int(nums[i]) - 48;
	}
	cout << sum;
	return 0;
}