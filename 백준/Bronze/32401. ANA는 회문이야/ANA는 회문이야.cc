#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	string input, sub;
	cin >> input;
	int res = 0, nc = 0;
	bool isSub = false;
	for (int i = 0; i < n; i++)
	{
		if (input[i] == 'A')
		{ 
			isSub = true;
			for (int j = i + 1; j < n; j++)
			{
				if (input[j] == 'N') nc++;
				else if (input[j] == 'A')
				{
					i = j - 1;
					isSub = false;
					break;
				}
			}
			if (!isSub && nc == 1) res++;
			nc = 0;
		}
	}
	cout << res;
	return 0;
}