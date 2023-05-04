#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int T, n, i, j, space;
	cin >> T;
	bool nums[10001] = { false };
	for (i = 2; i < int(sqrt(10001))+1; i++)
	{
		j = 2;
		while (i*j < 10001) {
			nums[i*j] = true;
			j++;
		}
	}
	vector<int> prime;
	for (i = 2; i < 10001; i++)
	{
		if (nums[i] == false) {
			prime.push_back(i);
		}
	}

	for (int t = 0; t < T; t++)
	{
		cin >> n;
		i = 0; j = prime.size() - 1;
		space = prime[j] - prime[i];
		int now_i = i, now_j = j;
		while (i <= j) {
			if (prime[i] + prime[j] > n) {
				j--;
			}
			else if (prime[i] + prime[j] < n) {
				i++;
			}
			else {
				if (space > prime[j] - prime[i]) {
					space = prime[j] - prime[i];
					now_j = j;
					now_i = i;
				}
				i++;
			}
		}
		cout << prime[now_i] << " " << prime[now_j] << "\n";
	}
	return 0;
}