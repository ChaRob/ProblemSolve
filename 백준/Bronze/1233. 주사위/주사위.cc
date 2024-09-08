#include <iostream>
#include <map>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	map<int, int> data;
	int max = 0, idx = 0;
	for (int i = 1; i <= s1; i++)
	{
		for (int j = 1; j <= s2; j++)
		{
			for (int k = 1; k <= s3; k++)
			{
				int sum = i + j + k;
				if (data.find(sum) != data.end()) {
					data[sum]++;
				}
				else {
					data[sum] = 1;
				}
			}
		}
	}
	for (auto i = data.begin(); i != data.end(); i++)
	{
		if (max < i->second) {
			max = i->second;
			idx = i->first;
		}
	}
	cout << idx;
	return 0;
}