#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int t = 0; t < n; t++)
	{
		int k, w;
		cin >> k >> w;
		string line;
		cin >> line; // first word
		int res = line.length();
		for (int i = 1; i < w; i++)
		{
			string next;
			cin >> next;
			int size = k;
			bool found = false;
			while (size > 0)
			{
				if (line.substr(line.length() - size) == next.substr(0, size))
				{
					res += next.length() - size;
					line += next.substr(size);
					found = true;
					break;
				}
				size--;
			}
			if (!found)
			{
				res += next.length();
				line += next;
			}
		}
		cout << res << "\n";
	}
	return 0;
}