#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int vote[5], cnt = 0;
	for (int i = 0; i < 5; i++) {
		cin >> vote[i];
		if (i != 0 && vote[0] - 1000 <= vote[i])
			cnt++;
	}
	cout << cnt;
	return 0;
}