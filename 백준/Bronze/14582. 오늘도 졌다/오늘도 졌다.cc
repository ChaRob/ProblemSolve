#include <iostream>
using namespace std;

int main()
{
	int score[2][9] = {}, gemini = 0, star = 0;
	bool rev = false, nowWin = false;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> score[i][j];
		}
	}
	for (int i = 0; i < 9; i++)
	{
		gemini += score[0][i];
		if (gemini > star)  nowWin = true;
		star += score[1][i];
		if (nowWin && gemini < star) {
			rev = true;
			break;
		}
	}
	if (rev)cout << "Yes";
	else	cout << "No";
	return 0;
}