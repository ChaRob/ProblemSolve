#include<iostream>
using namespace std;

void permu(int idx, int n, int *arr, bool *used, int *new_arr) {
	if (idx == n) {
		for (int i = 0; i < n; i++)
		{
			cout << new_arr[i] << " ";
		}
		cout << "\n";
	}
	else {
		int tmp;
		for (int i = 0; i < n; i++)
		{
			if (used[i] == false) {
				used[i] = true;
				new_arr[idx] = arr[i];
				permu(idx + 1, n, arr, used, new_arr);
				used[i] = false;
				new_arr[idx] = 0;
			}
		}
	}
}

int main()
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int *arr = new int[n];
	int *new_arr = new int[n]{ 0 };
	bool *used = new bool[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = i + 1;
		used[i] = false;
	}
	permu(0, n, arr, used, new_arr);
	delete[] arr, used, new_arr;
	return 0;
}