#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		int n;
		cin >> n;
		float result = 0.0f;
		for (int i = 0; i < n; i++)
		{
			string s;
			int cnt;
			float price;
			cin >> s >> cnt >> price;
			result += cnt * price;
		}
		cout << fixed << setprecision(2) << '$' << result << "\n";
	}
	return 0;
}