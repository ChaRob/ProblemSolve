#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	float n, m;
	cin >> n >> m;
	cout << ceil(n / m);
	return 0;
}