#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	char input, tmp = '\0';
	int maxV;
	for (int i = 0; i < 3; i++)
	{
		int cnt = 0;
		maxV = 0;
		for (int j = 0; j < 8; j++)
		{
			cin >> input;
			if (tmp != input) {
				maxV = (maxV > cnt) ? maxV : cnt;
				cnt = 0;
			}
			cnt++;
			tmp = input;
		}
		maxV = (maxV > cnt) ? maxV : cnt;
		cout << maxV << "\n";
	}
	return 0;
}