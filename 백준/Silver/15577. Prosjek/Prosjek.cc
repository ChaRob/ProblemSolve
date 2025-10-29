#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<double> grade(n);
	for (int i = 0; i < n; i++)
	{
		double g;
		cin >> g;
		grade[i] = g;
	}
	sort(grade.begin(), grade.end(), greater<double>());
	for (int i = n - 1; i > 0; i--)
	{
		double a = grade.back();
		grade.pop_back();
		double b = grade.back();
		grade.pop_back();

		grade.push_back((a + b) / 2);
	}
	cout << fixed << setprecision(6) << grade[0];
	return 0;
}