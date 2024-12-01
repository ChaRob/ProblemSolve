#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int x, y;
	cin >> x >> y;
	while (x <= y)
	{
		cout << "All positions change in year " << x << "\n";
		x += 60;
	}
	return 0;
}