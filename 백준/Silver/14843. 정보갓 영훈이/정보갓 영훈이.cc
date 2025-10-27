#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, p;
	cin >> n;
	double score = 0.0;
	for (int i = 0; i < n; i++)
	{
		double s, a, t, m;
		cin >> s >> a >> t >> m;
		score += (s * (1 + 1 / a) * (1 + m / t)) / 4;
	}
	cin >> p;
	vector<double> scores = { score };
	for (int i = 0; i < p; i++)
	{
		double ps;
		cin >> ps;
		scores.push_back(ps);
	}
	sort(scores.begin(), scores.end(), greater<double>());
	for (int i = 0; i < p + 1; i++)
	{
		if (scores[i] == score)
		{
			if (0.15 >= (i + 1) / double(p + 1)) cout << "The total score of Younghoon \"The God\" is ";
			else cout << "The total score of Younghoon is ";
			cout << fixed << setprecision(2) << score << ".";
			break;
		}
	}
	return 0;
}