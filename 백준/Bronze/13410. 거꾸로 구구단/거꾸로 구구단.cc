#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, k;
	cin >> n >> k;
	int max = 0;
	for (int i = 1; i <= k; i++)
	{
		string value = to_string(n * i);
		reverse(value.begin(), value.end());
		int res = stoi(value);
		max = (max > res) ? max : res;
	}
	cout << max;
	return 0;
}