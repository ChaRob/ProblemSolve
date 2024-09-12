#include <iostream>
#include <string>
using namespace std;

string BinarySum(string a, string b) {
	string res = "";
	int as = a.size(), bs = b.size();
	int rbit, up = 0;
	while (as > 0 && bs > 0)
	{
		int ac = a[as - 1] - '0';
		int bc = b[bs - 1] - '0';

		rbit = ac ^ bc ^ up;
		up = (ac + bc + up) >= 2;

		res += rbit + '0';
		as--;
		bs--;
	}

	while (as > 0) {
		int ac = a[as - 1] - '0';
		rbit = ac ^ up;
		up = ac & up;
		res += rbit + '0';
		as--;
	}
	while (bs > 0) {
		int bc = b[bs - 1] - '0';
		rbit = bc ^ up;
		up = bc & up;
		res += rbit + '0';
		bs--;
	}
	if (up) {
		res += '1';
	}
	while (res.size() > 1 && res.back() == '0')
	{
		res.pop_back();
	}
	return res;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		string a, b, res;
		cin >> a >> b;
		res = BinarySum(a, b);
		for (int i = res.size() - 1; i >= 0; i--)
		{
			cout << res[i];
		}
		cout << "\n";
	}
	return 0;
}