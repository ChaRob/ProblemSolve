#include<iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> n;
		if (abs(100 - sum) >= abs(100 - (sum + n))) {
			sum += n;
		}
		else {
			break;
		}
	}
	cout << sum;

	return 0;
}