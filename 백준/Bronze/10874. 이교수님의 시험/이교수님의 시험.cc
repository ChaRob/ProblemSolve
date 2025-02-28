#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int answer[10] = { 1,2,3,4,5,1,2,3,4,5 };
	for (int i = 1; i <= n; i++)
	{
		int cnt = 0;
		for (int j = 0; j < 10; j++)
		{
			int res;
			cin >> res;
			if (res == answer[j]) cnt++;
		}
		if (cnt == 10) cout << i << "\n";
	}
	return 0;
}