#include<iostream>
using namespace std;

bool num_use[10];
char inquality[12];

bool create_num(int k, int digit, int *arr, bool min_max);

bool check_num(int i, int digit, int k, int *arr, bool min_max) {
	if (!num_use[i]) {
		if (inquality[digit] == '<' && arr[digit - 1] < i) {
			num_use[i] = true;
			arr[digit] = i;
			if (create_num(k, digit + 1, arr, min_max)) {
				return true;
			}
			num_use[i] = false;
		}
		else if (inquality[digit] == '>' && arr[digit - 1] > i) {
			num_use[i] = true;
			arr[digit] = i;
			if (create_num(k, digit + 1, arr, min_max)) {
				return true;
			}
			num_use[i] = false;
		}
	}
	return false;
}

bool create_num(int k, int digit, int *arr, bool min_max) {
	if (digit == k + 1) {
		for (int i = 0; i <= k; i++)
		{
			cout << arr[i];
		}
		cout << "\n";
		return true;
	}
	else {
		if (min_max) {
			for (int i = 0; i <= 9; i++)
			{
				if (check_num(i, digit, k, arr, min_max)) {
					return true;
				}
			}
		}
		else {
			for (int i = 9; i >= 0; i--)
			{
				if (check_num(i, digit, k, arr, min_max)) {
					return true;
				}
			}
		}
	}
	return false;
}

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int k;
	cin >> k;
	for (int i = 1; i <= k; i++)
	{
		cin >> inquality[i];
	}
	int *arr = new int[k + 1]{ 0 };
	for (int i = 9; i >= 0; i--)
	{
		num_use[i] = true;
		arr[0] = i;
		if (create_num(k, 1, arr, false)) {
			break;
		}
		num_use[i] = false;
	}
	for (int i = 0; i <= 9; i++)
	{
		num_use[i] = false;
	}
	for (int i = 0; i <= 9; i++)
	{
		num_use[i] = true;
		arr[0] = i;
		if (create_num(k, 1, arr, true)) {
			break;
		}
		num_use[i] = false;
	}

	return 0;
}