#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int w, h;
	cin >> w >> h;
	cout << fixed << setprecision(7) << (float)(w + h) - sqrt(w * w + h * h);

	return 0;
}