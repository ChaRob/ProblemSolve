#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int ds, ys, dm, ym, i = 1, j = 1;
	cin >> ds >> ys >> dm >> ym;
	while (ys * i - ds != ym * j - dm)
	{
		if (ys * i - ds < ym * j - dm)
			i++;
		else
			j++;
	}
	cout << ys * i - ds;
	return 0;
}