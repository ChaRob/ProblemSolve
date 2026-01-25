#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n, target = 1;
	cin >> n;
	vector<int> stack;
	for (int i = 0; i < n; i++)
	{
		int cookie;
		cin >> cookie;
		if (cookie != target)
			stack.push_back(cookie);
		else
		{
			target++;
			while (stack.size() > 0 && target == stack.back())
			{
				stack.pop_back();
				target++;
			}
		}
	}
	if (target > n)
		cout << "Nice";
	else
		cout << "Sad";
	return 0;
}