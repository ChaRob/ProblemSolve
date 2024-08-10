#include<iostream>
using namespace std;

int main() {
	int a[4], cnt = 0;
	double maxV = 0;
	for (int i = 0; i < 4; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < 4; i++)
	{
		int tmpa;
		double tmpv;
		tmpa = a[2];
		a[2] = a[3]; a[3] = a[1]; a[1] = a[0];
		a[0] = tmpa;
		tmpv = a[0] / (double)a[2] + a[1] / (double)a[3];

		if (tmpv > maxV) {
			maxV = tmpv;
			cnt = i + 1;
			if (cnt == 4) cnt = 0;
		}
	}
	cout << cnt;
	return 0;
}