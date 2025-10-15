#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int N, lastNum, i = 1;
		cin >> N;
		if (N == 0)
		{
			cout << "Case #" << t + 1 << ": INSOMNIA\n";
			continue;
		}
		lastNum = N;
		bool digit[10] = { false };
		while (true)
		{
			while (lastNum)
			{
				digit[lastNum % 10] = true;
				lastNum /= 10;
			}

			bool check = true;
			for (int i = 0; i < 10; i++)
			{
				if (!digit[i])
				{
					check = false;
					break;
				}
			}
			if (check)
				break;
			lastNum = N * ++i;
		}
		cout << "Case #" << t + 1 << ": " << N * i << '\n';
	}
	return 0;
}