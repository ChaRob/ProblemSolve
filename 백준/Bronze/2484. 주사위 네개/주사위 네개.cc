#include <iostream>
using namespace std;

int CalculatePrize(const int *dice, int& maxV) {
	int count[7] = {};
	for (int i = 0; i < 4; i++) {
		count[dice[i]]++;
	}
	bool twoCheck = false;
	int rollNum;
	for (int i = 1; i <= 6; i++)
	{
		if (count[i] == 4) {
			return 50000 + i * 5000;
		}
		else if (count[i] == 3) {
			return 10000 + i * 1000;
		}
		else if (count[i] == 2) {
			if (twoCheck) {
				return 2000 + rollNum * 500 + i * 500;
			}
			twoCheck = true;
			rollNum = i;
		}
	}
	if (twoCheck) {
		return 1000 + rollNum * 100;
	}
	return maxV * 100;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, prize_max = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int maxV = 0, dice[4] = {}, res;
		for (int j = 0; j < 4; j++)
		{
			cin >> dice[j];
			maxV = (maxV > dice[j]) ? maxV : dice[j];
		}
		res = CalculatePrize(dice, maxV);
		prize_max = (prize_max > res) ? prize_max : res;
	}
	cout << prize_max;
	return 0;
}