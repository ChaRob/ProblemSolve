#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, k;
	cin >> n >> k;
	vector<vector<int>> country;
	for (int i = 0; i < n; i++)
	{
		vector<int> tmp;
		int score, con;
		cin >> con;
		for (int j = 0; j < 3; j++)
		{
			cin >> score;
			tmp.push_back(score);
		}
		tmp.push_back(con);
		country.push_back(tmp);
	}
	sort(country.begin(), country.end(), greater<vector<int>>());
	country.push_back(vector<int>{n, 0, 0, 0});
	int grade = 1, save = 0;
	for (size_t i = 0; i < country.size() - 1; i++)
	{
		if (country[i][3] == k) {
			break;
		}

		if (country[i][0] > country[i + 1][0] ||
			country[i][1] > country[i + 1][1] ||
			country[i][2] > country[i + 1][2]) {
			grade += save + 1;
			save = 0;
		}
		else if (country[i][0] == country[i + 1][0] &&
			country[i][1] == country[i + 1][1] &&
			country[i][2] == country[i + 1][2]) {
			save++;
		}
	}
	cout << grade;
	return 0;
}