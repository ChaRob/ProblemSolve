#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int k, cnt = 0;
		cin >> k;
		bool check = true;
		for (int j = 0; j < k; j++)
		{
			char c;
			cin >> c;
			if (c == '>')
				cnt++;
			else
			{
				cnt--;
				if (c == '<' && cnt < 0)
					check = false;
			}
		}
		if (cnt != 0)
			check = false;

		if (check)
			cout << "legal\n";
		else
			cout << "illegal\n";
	}
	return 0;
}