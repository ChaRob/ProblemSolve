#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, cnt = 0;
	string store;
	cin >> n >> store;
	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		for (int j = 0; j < input.size(); j++)
		{
			if (input[j] == store[0])
			{
				int k = 1, nextIndex = j + k, index = 1;
				while (nextIndex < input.size() && index < store.size())
				{
					if (input[nextIndex] == store[index])
					{
						index++;
						nextIndex += k;
					}
					else
					{
						index = 1;
						k++;
						nextIndex = j + k;
					}
				}
				if (index == store.size())
				{
					cnt++;
					break;
				}
			}
		}
	}
	cout << cnt;
	return 0;
}