#include<iostream>
#include<set>
#include<map>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T, k;
	long n;
	char order;
	cin >> T;
	for (size_t i = 0; i < T; i++)
	{
		cin >> k;
		set<long> arr;
		map<long, int> cnt;
		for (size_t j = 0; j < k; j++)
		{
			cin >> order >> n;
			if (order=='I')
			{
				arr.insert(n);
				if (cnt.find(n) != cnt.end()) {
					cnt[n]++;
				}
				else {
					cnt[n] = 1;
				}
			}
			else {
				if (!arr.empty())
				{
					if (n == -1) {
						if (cnt[*arr.begin()]>1)
						{
							cnt[*arr.begin()]--;
						}
						else {
							cnt[*arr.begin()] = 0;
							arr.erase(*arr.begin());
						}
					}
					else {
						if (cnt[*arr.rbegin()] > 1)
						{
							cnt[*arr.rbegin()]--;
						}
						else {
							cnt[*arr.rbegin()] = 0;
							arr.erase(*arr.rbegin());
						}
					}
				}
			}
		}
		if (arr.empty()) {
			cout << "EMPTY" << "\n";
		}
		else {
			cout << *arr.rbegin() << " " << *arr.begin() << "\n";
		}
	}

	return 0;
}