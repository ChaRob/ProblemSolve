#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	double l, pi = 3.1415926535897932;
	cin >> l;
	cout << fixed << setprecision(10) << l * l * sin(pi/3) / 2;
	return 0;
}