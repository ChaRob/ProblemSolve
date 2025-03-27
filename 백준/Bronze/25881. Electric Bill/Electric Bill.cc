#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int stand, plus, n;
	cin >> stand >> plus >> n;
	for (int i = 0; i < n; i++)
	{
		int now, result;
		cin >> now;
		if (now <= 1000) result = now * stand;
		else result = 1000 * stand + (now - 1000) * plus;
		cout << now << " " << result << "\n";
	}
	return 0;
}