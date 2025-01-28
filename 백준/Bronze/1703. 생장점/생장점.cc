#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int a, sf, br;
	while (true)
	{
		cin >> a;
		if (a == 0) break;
		int cnt = 1;
		for (int i = 0; i < a; i++)
		{
			cin >> sf >> br;
			cnt = cnt * sf - br;
		}
		cout << cnt << "\n";
	}
	return 0;
}