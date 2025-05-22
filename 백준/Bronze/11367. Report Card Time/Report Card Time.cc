#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string name, res;
		int score;
		cin >> name >> score;
		if (score >= 97)
			res = "A+";
		else if (score >= 90)
			res = "A";
		else if (score >= 87)
			res = "B+";
		else if (score >= 80)
			res = "B";
		else if (score >= 77)
			res = "C+";
		else if (score >= 70)
			res = "C";
		else if (score >= 67)
			res = "D+";
		else if (score >= 60)
			res = "D";
		else
			res = "F";
		cout << name << " " << res << "\n";
	}
	return 0;
}