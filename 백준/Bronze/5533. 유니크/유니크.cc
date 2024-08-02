#include <iostream>
using namespace std;

int score[201][3];
int unique[201][3];

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			int tmp;
			cin >> tmp;
			score[i][j] = tmp;
			unique[i][j] = 1;
			for (int k = 0; k < i; k++)
			{
				if (score[k][j] == score[i][j]) {
					unique[i][j] = 0;
					unique[k][j] = 0;
					break;
				}
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += score[i][j] * unique[i][j];
		}
		cout << sum << "\n";
	}
	return 0;
}