#include <iostream>
#include <sstream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int h, m, s;
	string nowTime, endTime;
	cin >> nowTime >> endTime;
	replace(nowTime.begin(), nowTime.end(), ':', ' ');
	replace(endTime.begin(), endTime.end(), ':', ' ');
	stringstream inputNow(nowTime), inputEnd(endTime);
	inputNow >> h >> m >> s;
	int nowTimeSum = h * 3600 + m * 60 + s;
	inputEnd >> h >> m >> s;
	int endTimeSum = h * 3600 + m * 60 + s;
	int res = endTimeSum - nowTimeSum;
	if (res <= 0) {
		res += 86400;
	}
	h = res / 3600;
	m = (res % 3600) / 60;
	s = res % 60;

	cout << setw(2) << setfill('0') << h << ":"
		 << setw(2) << setfill('0') << m << ":"
		 << setw(2) << setfill('0') << s;
	return 0;
}