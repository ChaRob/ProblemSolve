#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	float t, res;
	cin >> t;
	res = round((t / 2) * (t / 2));
	cout << fixed << setprecision(0) << res;
	return 0;
}