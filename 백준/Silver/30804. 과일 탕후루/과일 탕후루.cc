#include <iostream>
#include <queue>
#include <set>
using namespace std;

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int fruits[10] = {};
	queue<int> que;
	set<int> st;
	int maxLen = 0;
	for (int i = 0; i < n; i++)
	{
		int fruit;
		cin >> fruit;
		if (st.find(fruit) == st.end())
		{
			if (st.size() == 2)
			{
				while (!que.empty())
				{
					int front = que.front();
					que.pop();
					fruits[front]--;
					if (fruits[front] == 0)
					{
						st.erase(front);
						break;
					}
				}
			}
			que.push(fruit);
			st.insert(fruit);
			fruits[fruit]++;
		}
		else
		{
			que.push(fruit);
			fruits[fruit]++;
		}
		maxLen = (maxLen > que.size()) ? maxLen : que.size();
	}
	cout << maxLen;
	return 0;
}