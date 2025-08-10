#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, k;
	cin >> n >> k;
	int year[7][2] = {};
	for (int i = 0; i < n; i++)
	{
		int s, y;
		cin >> s >> y;
		year[y][s]++;
	}
	int rooms = 0;
	rooms += ceil(static_cast<float>(year[1][0] + year[1][1] + year[2][0] + year[2][1]) / k);
	rooms += ceil(static_cast<float>(year[3][0] + year[4][0]) / k);
	rooms += ceil(static_cast<float>(year[3][1] + year[4][1]) / k);
	rooms += ceil(static_cast<float>(year[5][0] + year[6][0]) / k);
	rooms += ceil(static_cast<float>(year[5][1] + year[6][1]) / k);
	cout << rooms;
	return 0;
}