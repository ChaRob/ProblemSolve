#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	long long n, now;
	cin >> n >> now;
	string s;
	// true : open, false : close
	bool last = now == 0 ? false : true;
	bool twoOpen = now == 0 ? true : false;
	bool threeOpen = now == 0 ? false : true;
	bool success = true;
	for (long long i = 2; i <= n; i++)
	{
		now = (now + 1) % 2;
		last = !last;
		if (i % 2 == 0)
		{
			if (last != twoOpen)
			{
				success = false;
				break;
			}
		}
		if (i % 3 == 0)
		{
			if (last != threeOpen)
			{
				success = false;
				break;
			}
		}
		s += to_string(now);
	}
	if (success)
	{
		for (long long i = 0; i < s.length(); i++)
		{
			cout << s[i] << "\n";
		}
	}
	else
	{
		cout << "Love is open door";
	}
	return 0;
}