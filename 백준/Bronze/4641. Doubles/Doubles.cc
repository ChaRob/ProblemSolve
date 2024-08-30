#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	bool integer[101] = {};
	int input;
	while (true)
	{
		cin >> input;
		if (input == -1) break;
		if (input != 0) {
			integer[input] = true;
		}
		else {
			int cnt = 0;
			for (int i = 1; i <= 50; i++)
			{
				if (integer[i] && integer[i * 2]) {
					cnt++;
				}
			}
			cout << cnt << "\n";
			for (int i = 0; i < 101; i++)
			{
				integer[i] = false;
			}
		}
	}
	return 0;
}