#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	double area;
	double PI = 3.14159265358979323846;
	cin >> area;
	cout << fixed << setprecision(7) << (sqrt(area / PI)) * 2 * PI;
	return 0;
}