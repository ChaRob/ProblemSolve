#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	double liquids = 0;
	for (int i = 0; i < n; i++)
	{
		double input;
		cin >> input;
		liquids += pow(input, 3);
	}
	liquids = cbrt(liquids);
	cout << fixed << setprecision(6) << liquids;
	return 0;
}