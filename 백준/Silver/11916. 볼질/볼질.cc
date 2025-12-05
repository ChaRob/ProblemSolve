#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	int ballCnt = 0, missPoint = 0;
	bool base[3] = {};
	for (int i = 0; i < n; i++)
	{
		int ball;
		cin >> ball;
		switch (ball)
		{
		case 3:
			if (base[2])
			{
				missPoint++;
				base[2] = false;
			}
			if (base[1])
			{
				base[2] = true;
				base[1] = false;
			}
			if (base[0])
			{
				base[1] = true;
				base[0] = false;
			}
		case 1:
			ballCnt++;
			if (ballCnt == 4)
			{
				ballCnt = 0;
				if (base[0])
				{
					if (base[1])
					{
						if (base[2])
						{
							missPoint++;
							base[2] = false;
						}
						base[2] = true;
						base[1] = false;
					}
					base[1] = true;
					base[0] = false;
				}
				base[0] = true;
			}
			break;
		case 2:
			ballCnt = 0;
			if (base[0])
			{
				if (base[1])
				{
					if (base[2])
					{
						missPoint++;
						base[2] = false;
					}
					base[2] = true;
					base[1] = false;
				}
				base[1] = true;
				base[0] = false;
			}
			base[0] = true;
			break;
		}
	}
	cout << missPoint;
	return 0;
}