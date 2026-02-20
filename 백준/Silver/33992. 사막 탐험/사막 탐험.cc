#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double Dist(double _x1, double _y1, double _x2, double _y2)
{
	double dx = _x1 - _x2;
	double dy = _y1 - _y2;
	return sqrt(dx * dx + dy * dy);
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	double ax, ay, bx, by, px, py, r;
	cin >> ax >> ay >> bx >> by >> px >> py >> r;
	double answer = Dist(ax, ay, bx, by);
	double dA = Dist(ax, ay, px, py);
	double dB = Dist(bx, by, px, py);
	double withCircle = max(0.0, dA - r) + max(0.0, dB - r);
	answer = min(withCircle, answer);
	cout << fixed << setprecision(10) << answer;
	return 0;
}