#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	while (true)
	{
		int k, m;
		cin >> k;
		if (k == 0) break;
		cin >> m;
		vector<string> courses;
		for (int i = 0; i < k; i++)
		{
			string course;
			cin >> course;
			courses.push_back(course);
		}
		bool canTaken = true;
		for (int i = 0; i < m; i++)
		{
			int c, r, taken = 0;
			cin >> c >> r;
			for (int j = 0; j < c; j++)
			{
				string course;
				cin >> course;
				for (string s : courses)
				{
					if (s == course)
					{
						taken++;
						break;
					}
				}
			}
			if (taken < r)
			{
				canTaken = false;
			}
		}
		if (canTaken)
		{
			cout << "yes\n";
		}
		else
		{
			cout << "no\n";
		}
	}
	return 0;
}