#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, k, cnt = 0, input;
	cin >> n >> k;
	vector<int> vec;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		vec.push_back(input);
	}
	for (int i = n - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (vec[j] > vec[j + 1]) {
				int tmp = vec[j];
				vec[j] = vec[j + 1];
				vec[j + 1] = tmp;
				cnt++;
				if (cnt == k) {
					if (vec[j] > vec[j + 1]) cout << vec[j + 1] << " " << vec[j];
					else cout << vec[j] << " " << vec[j + 1];
				}
			}
		}
	}
	if (cnt < k) cout << -1;
	return 0;
}