#include<iostream>
using namespace std;
int main() {
	int x1, y1, x2, y2, x3, y3, x4, y4;
	cin >> x1 >> y1 >> x2 >> y2;
	cin >> x3 >> y3 >> x4 >> y4;
	int x5 = (x1 < x3) ? x1 : x3;
	int y5 = (y1 < y3) ? y1 : y3;
	int x6 = (x2 > x4) ? x2 : x4;
	int y6 = (y2 > y4) ? y2 : y4;
	int max_dist = (abs(x5 - x6) > abs(y5 - y6)) ? abs(x5 - x6) : abs(y5 - y6);
	cout << max_dist*max_dist;
	return 0;
}