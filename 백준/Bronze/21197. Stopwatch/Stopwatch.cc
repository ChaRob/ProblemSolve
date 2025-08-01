#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int totalTime = 0, clickTime, beforeTime;
	for (int i = 1; i <= n; i++)
	{
		cin >> clickTime;
		if (i % 2) beforeTime = clickTime;
		else
		{
			totalTime += clickTime - beforeTime;
		}
	}
	if (n % 2) cout << "still running";
	else cout << totalTime;
	return 0;
}