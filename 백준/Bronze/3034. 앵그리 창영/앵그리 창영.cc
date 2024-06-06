#include<iostream>
#include<math.h>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, w, h;
	cin >> n >> w >> h;
	for (int i = 0; i < n; i++)
	{
		int length;
		cin >> length;
		double diag = sqrt(w * w + h * h);
		if (length <= w or length <= h or length <= diag) {
			cout << "DA\n";
		}
		else {
			cout << "NE\n";
		}
	}
	return 0;
}