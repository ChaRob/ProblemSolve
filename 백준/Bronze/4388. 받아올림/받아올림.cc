#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	while (true)
	{
		string a, b;
		cin >> a >> b;
		if (a == "0" && b == "0") break;
		int cnt = 0;
		int ai = a.size() - 1, bi = b.size() - 1;
		int carry = 0;
		while (ai >= 0 || bi >= 0)
		{
			int an = (ai >= 0) ? a[ai--] - '0' : 0, bn = (bi >= 0) ? b[bi--] - '0' : 0;
			if (an + bn + carry >= 10)
			{
				carry = 1;
				cnt++;
			}
			else carry = 0;
		}
		cout << cnt << '\n';
	}
	return 0;
}