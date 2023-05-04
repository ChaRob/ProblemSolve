#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int n, i, j;
	bool nums[1000001] = { false };
	for (i = 3; i < int(sqrt(1000001))+1; i+=2)
	{
		j = 3;
		while (i*j < 1000001) {
			nums[i*j] = true;
			j+=2;
		}
	}

	while (true)
	{
		cin >> n;
		if (n == 0) break;
		bool check = true;
		for (int i = 3; i < n; i+=2)
		{
			if (nums[i] == false && nums[n-i] == false) {
				cout << n << " = " << i << " + " << n - i << "\n";
				check = false;
				break;
			}
		}
		if (check) {
			cout << "Goldbach's conjecture is wrong.\n";
		}
	}
	return 0;
}