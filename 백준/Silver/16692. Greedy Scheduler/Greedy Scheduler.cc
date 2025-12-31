#include <iostream>
#include <vector>
using namespace std;

int cashier[1001];

void FindCashier(const int& n, const int customerTime)
{
	int minTime = 10000;
	for (int i = 1; i <= n; i++)
	{
		if (cashier[i] == 0)
		{
			cashier[i] = customerTime;
			cout << i << " ";
			return;
		}
		minTime = (minTime < cashier[i]) ? minTime : cashier[i];
	}
	bool check = true;
	for (int i = 1; i <= n; i++)
	{
		cashier[i] -= minTime;
		if (cashier[i] == 0 && check)
		{
			check = false;
			cashier[i] = customerTime;
			cout << i << " ";
		}
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, c;
	cin >> n >> c;
	for (int i = 0; i < c; i++)
	{
		int customer;
		cin >> customer;
		FindCashier(n, customer);
	}
	return 0;
}