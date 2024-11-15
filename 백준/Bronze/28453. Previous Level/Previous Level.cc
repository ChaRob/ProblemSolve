#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, lv;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> lv;
		if (lv == 300) cout << "1 ";
		else if (275 <= lv && lv < 300) cout << "2 ";
		else if (250 <= lv && lv < 275) cout << "3 ";
		else cout << "4 ";
	}
	return 0;
}