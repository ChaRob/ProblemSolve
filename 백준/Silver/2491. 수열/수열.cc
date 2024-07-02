#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, max_len = 1, len = 1;
	cin >> n;
	int* sq = new int[n];
	cin >> sq[0];
	bool Up = true;
	for (int i = 1; i < n; i++)
	{
		cin >> sq[i];
		if (Up) {
			if (sq[i] >= sq[i - 1]) {
				len++;
				max_len = (max_len > len) ? max_len : len;
			}
			else {
				len = 1;
				int j = i;
				while (i-j >= 0 && sq[j] <= sq[j - 1]) {
					len++;
					j--;
				}
				max_len = (max_len > len) ? max_len : len;
				Up = false;
			}
		}
		else {
			if (sq[i] <= sq[i - 1]) {
				len++;
				max_len = (max_len > len) ? max_len : len;
			}
			else {
				len = 1;
				int j = i;
				while (i - j >= 0 && sq[j] >= sq[j - 1]) {
					len++;
					j--;
				}
				max_len = (max_len > len) ? max_len : len;
				Up = true;
			}
		}

	}

	cout << max_len;
	delete[] sq;
	return 0;
}