#include <iostream>
#include <vector>
using namespace std;

struct Gear
{
	int di;
	int ci;
};

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<Gear> gears(n + 1);
	for (int i = 0; i < n; i++)
	{
		int si, di, ci;
		cin >> si >> di >> ci;
		gears[si] = { di, ci };
	}
	int nowRotate = 0;
	int idx = 1;
	while (true)
	{
		Gear drive = gears[idx];
		idx = drive.di;
		if (drive.ci == 1)
			nowRotate = (nowRotate + 1) % 2;

		if (idx == n)
			break;
	}
	cout << nowRotate;
	return 0;
}