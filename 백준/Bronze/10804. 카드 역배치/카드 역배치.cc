#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int nums[21] = {0};
	for (int i = 1; i <= 20; i++)
	{
		nums[i] = i;
	}
	for (int i = 0; i < 10; i++)
	{
		int a, b;
		cin >> a >> b;
		while (a < b) {
			int tmp = nums[a];
			nums[a] = nums[b];
			nums[b] = tmp;
			a++;
			b--;
		}
	}
	for (int i = 1; i <= 20; i++)
	{
		cout << nums[i] << " ";
	}
	return 0;
}