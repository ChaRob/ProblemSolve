#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int* arr = new int[n];
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	bool found = false;
	for (int i = 0; i < n; i++)
	{
		sum -= arr[i];
		if (sum == arr[i])
		{
			found = true;
			cout << arr[i];
			break;
		}
		sum += arr[i];
	}
	if (!found)
		cout << "BAD";
	delete[] arr;
	return 0;
}