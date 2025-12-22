#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool IsPalidrome(const string& str)
{
	int left = 0;
	int right = str.size() - 1;
	while (left < right)
	{
		if (str[left] != str[right])
		{
			return false;
		}
		left++;
		right--;
	}
	return true;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int k;
		cin >> k;
		vector<string> words(k);
		for (int i = 0; i < k; i++)
		{
			cin >> words[i];
		}
		bool found = false;
		for (int i = 0; i < k; i++)
		{
			for (int j = 0; j < k; j++)
			{
				if (i == j) continue;
				string combined = words[i] + words[j];
				if (IsPalidrome(combined))
				{
					cout << combined << "\n";
					found = true;
					break;
				}
			}
			if (found) break;
		}
		if (!found) cout << "0\n";
	}
	return 0;
}