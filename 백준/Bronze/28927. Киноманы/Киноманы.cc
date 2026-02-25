#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int t1, e1, f1, t2, e2, f2;
	cin >> t1 >> e1 >> f1 >> t2 >> e2 >> f2;
	int max = t1 * 3 + e1 * 20 + f1 * 120;
	int mel = t2 * 3 + e2 * 20 + f2 * 120;
	if (max > mel)
		cout << "Max";
	else if (max < mel)
		cout << "Mel";
	else
		cout << "Draw";
	return 0;
}