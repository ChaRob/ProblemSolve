#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	cout << fixed << setprecision(2);
	for (int t = 0; t < T; t++)
	{
		double n;
		cin >> n;
		cout << "$" << n * 0.8 << "\n";
	}
	return 0;
}